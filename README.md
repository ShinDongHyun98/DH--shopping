# DH--shopping


# project 설명 (=스마트쇼핑)

현재 AI화되어가고있는 현대사회에서 쇼핑역시 예외는 아니다. 현재 대형매장, 편의점, 아이스크림 판매점, 문구점 등 다양한 분야에서 무인 매장을 운영하고 있다.
국내 시스템의 경우 소비자가 직접 바코드를 찍고, 계산을 진행하지만 현재 해외의 기업인 아마존에서는 아마존고라는 오프라인 매장을 만들어 
소비자가 물건만 들고나가면 아마존 계정으로 청구되도록 하는 시스템을 구축하였다. 현재 국내의 무인매장의 경우 기존 계산 방식보다
더 많은 계산대를 놓을 수 있다는 장점이 있지만 소비자가 바코드를 찍는 행위에 익숙하지 않아 시간이 지체되는 문제 등이 발생한다.
아마존고의 경우 수 많은 센서가 있어 초기 설립비용이 많이 나가게 된다. 

초기설치비용은 줄이고 소비자가 바코드를 찍지 않게 하는 이 프로젝트는 대다수의 사람들이 스마트폰을 가지고 있는 환경을 이용해 해결하고자 한다.
사람들의 스마트폰으로 쇼핑카트를 찍어 물건들을 인식하고 계산은 스마트폰으로 결제하는 시스템을 만드는게 이 프로젝트의 목표이다.

# 구현 방향

아두이노와 카메라 센서를 이용해 스마트폰 카메라로 대체하고, 실제 식료품이나 물품들은 서로 다른 색깔이 있는 박스 등으로 대체하려고 한다.

pixy2라는 카메라 센서를 이용하기로 하였으며
이에 대한 코딩을 깃허브에 올리려 한다.

# 코딩에 들어가는 단어 설명

pixy2.ccc // Color Connected Components object의 줄임말인 CCC로 
pixy.ccc.getblock() // 색상블록을 get

