# 자동 주사위 & 룰렛 보드게임
### ATmega128 기반 블루투스 통신 자동 테이블 게임   
## 제목
### 미래지향성 자동 테이블 보드게임   
## 개요
- 기존의 보드게임이나 술게임을 IT 기술과 접목시켜 보다 쉽고 재밌게 즐길 수 있는 오락기기
- 4명의 유저로부터 동시에 풋스위치 입력을 받아 주사위를 회전시키고, 주사위의 값만큼 LED가 순차적으로 켜지면서 지령포인트로 이동하고 유저는 해당 지령을 수행
 ## 개발 환경
 ![environment](/pics/resized_env.png)
 ## 제품 이미지
 ### 컨셉 이미지
 |완성도|분해도|
|:---:|:---:|
|![table](/pics/finished_table.png)|![detail_table](/pics/detail_table.png)|

### 제작 이미지
 |목재작업|LED설치|
 |:---:|:---:|
|![wood](/pics/wood.png)|![led](/pics/led.png)|
|주사위내부|테이블작동|
|![dice](/pics/resized_dice.jpg)|![finish](/pics/finish.png)|

## 구성도 & 플로우차트
 |구성도|플로우차트|
 |:---:|:---:|
|![structure](/pics/mechanism.png)|![flow_chart](/pics/flowchart.png)|

## 시스템 설명
### 테이블
- 대기모드 상태에서 유저 4명이 풋스위치를 동시에 누름, 메인시스템에서 동시에 스위치 입력을 받으면 Timer를 이용해 DC모터를 약 5초간 정회전 출력   
- 주사위로부터 블루투스 통신으로 정수형 숫자 데이터를 수신, 인덱스화 되어있는 포지션을 숫자만큼 진행하면서 LED 출력   
- 유저는 ‘말‘ 역할의 LED가 멈춘 포지션의 지령에 따라 벌칙 수행   
- 전기벌칙에 말이 설 경우 각각의 전기충격 디바이스로 high 전원 출력   
- 다시 대기모드로 전환되고 풋 스위치 입력 대기   
### 주사위
- 각 면에 조도센서와 LED 배치, 조도량이 낮은 면의 반대편(윗면)이 주사위에서 나온 숫자
- 해당 면에 LED를 출력하여 숫자 가시화, 해당 숫자를 메인 시스템으로 전송   

## 완성 이미지 & 영상 링크
 |완성이미지|동영상 링크|
 |:---:|:---:|
|![product](/pics/product.png)|![capture](/pics/capture.png)<br/><br/>영상 링크 : https://youtu.be/RMY9h7epKfE|

[새 탭에서 열기](https://www.google.com/){:target="_blank"}
<a href="https://www.google.com/" target="_blank">새 탭에서 열기</a>
