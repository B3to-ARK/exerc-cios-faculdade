//Modulo
var combustivelModulo = angular.module('combustivelApp', []);

//Controler
combustivelModulo.controller('combustivelController', function($scope) {
    
    //Função para calcular o combustivel do usuário
    $scope.calcular = function (){
        //Calcular o combustivel
        $scope.percentcombustivel = (($scope.alcool * 100)/$scope.gasolina);
        //Decisão
        if ($scope.percentcombustivel < 70){
            $scope.combustivel = 'Alcool';
        }else if ($scope.percentcombustivel >= 70){
            $scope.combustivel = 'Gasolina';
        }
        $scope.exibeResultados = true;
    }

    $scope.calcularpreciso = function (){
        //Calcular o combustivel
        $scope.percentcombustivel = (($scope.alcool * 100)/$scope.gasolina);
        $scope.percentcombustivelcarro = (($scope.consumoalcool * 100)/$scope.consumogasolina);
        //Decisão
        if ($scope.percentcombustivel < $scope.percentcombustivelcarro){
            $scope.combustivelpreciso = 'Alcool';
        }else if ($scope.percentcombustivel >= $scope.percentcombustivelcarro){
            $scope.combustivelpreciso = 'Gasolina';
        }
        $scope.exibeResultados = true;
    }
    
});

