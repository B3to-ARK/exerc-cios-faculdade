//Modulo
var impostoModulo = angular.module('impostoAPP', []);

//Controler
impostoModulo.controller('impostoController', function($scope) {
    
    //Função para calcular o IMC do usuário
    $scope.calcularImposto = function (){

        $scope.tetoinss = 671.72;

        $scope.valordependente = $scope.numerodependente * 189.59;

        $scope.valerefeicao = 0.10;

        $scope.valorplanosaude = $scope.planodesaude;

        $scope.contribuicaosindical = $scope.sindicato;

        //Decisão
        if ($scope.salario <= 1903.98){
            $scope.alicotapercent = '0%';
        }else if ($scope.salario >= 1903.99 && $scope.salario <= 2826.65){
            $scope.alicotapercent = '7.5%';
        }else if ($scope.salario >= 2826.66 && $scope.salario <= 3751.05){
            $scope.alicotapercent = '15%';
        }else if ($scope.salario >= 3751.06 && $scope.salario <= 4664.68){
            $scope.alicotapercent = '22%';
        }else if ($scope.salario >= 4664.68){
            $scope.alicotapercent = '27.5%';
        }

          if ($scope.salario <= 1903.98){
            $scope.alicotareal =  0;
        }else if ($scope.salario >= 1903.99 && $scope.salario <= 2826.65){
            $scope.alicotareal = 142.80;
        }else if ($scope.salario >= 2826.66 && $scope.salario <= 3751.05){
            $scope.alicotareal = 354.80;
        }else if ($scope.salario >= 3751.06 && $scope.salario <= 4664.68){
            $scope.alicotareal = 636.13;
        }else if ($scope.salario >= 4664.68){
            $scope.alicotareal = 869.36;
        }

        if ($scope.salario <= 1903.98){
            $scope.alicotap = ((($scope.salario - $scope.tetoinss - $scope.valordependente)  * 0) / 100) - $scope.alicotareal;
        }else if ($scope.salario >= 1903.99 && $scope.salario <= 2826.65){
            $scope.alicotap = ((($scope.salario - $scope.tetoinss - $scope.valordependente)  * 7.5) / 100) - $scope.alicotareal;
        }else if ($scope.salario >= 2826.66 && $scope.salario <= 3751.05){
            $scope.alicotap = ((($scope.salario - $scope.tetoinss - $scope.valordependente)  * 15) / 100) - $scope.alicotareal;
        }else if ($scope.salario >= 3751.06 && $scope.salario <= 4664.68){
            $scope.alicotap = ((($scope.salario - $scope.tetoinss - $scope.valordependente)  * 22.5) / 100) - $scope.alicotareal;
        }else if ($scope.salario >= 4664.68){
            $scope.alicotap = ((($scope.salario - $scope.tetoinss - $scope.valordependente)  * 27.5) / 100) - $scope.alicotareal;
        }

        $scope.salarioliquido = $scope.salario - $scope.tetoinss -   
            $scope.alicotap - 
            $scope.valerefeicao -
            $scope.valorplanosaude -
            $scope.contribuicaosindical;

        $scope.exibeResultados = true;
    }
    
});