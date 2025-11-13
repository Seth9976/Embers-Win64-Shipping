// 函数: sub_14226f9a0
// 地址: 0x14226f9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1417ca010()

if (rax == 0)
    return rax

void*** rax_1 = sub_140a84c80(0, 0x20, 0)

if (rax_1 != 0)
    *rax_1 = &data_143311e78
    rax_1[2] = sub_140a387b0()
    *rax_1 = &data_143311ed0

int64_t rbx = 0
void arg_8

if (rax_1 != 0)
    sub_140599630(&data_14399fca0, 1)
    int64_t* rax_4 = (*rax_1)[6](rax_1, &arg_8)
    int64_t rsi_1 = sx.q(data_14399fca8)
    rbx = *rax_4
    int32_t rax_5 = (rsi_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_14399fcac
    data_14399fca8 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fca0)
    
    int64_t rax_6 = data_14399fca0
    int64_t rcx_3 = rsi_1 * 2
    *(rax_6 + (rcx_3 << 3)) = rax_1
    *(rax_6 + (rcx_3 << 3) + 8) = 2

data_143f52438 = rbx
int64_t* rax_7 = j_sub_140a82f30(0x10)
int64_t* rbx_1 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    *rax_7 = 0
    rax_7[1] = 0

data_143f52708 = rbx_1
sub_140d21fd0()
void*** rax_8 = sub_140a84c80(0, 0x30, 0)

if (rax_8 != 0)
    rax_8[1] = rbx_1
    *rax_8 = &data_142d3fe58
    rax_8[2] = sub_142249870
    rax_8[4] = sub_140a387b0()
    *rax_8 = &data_142d3feb0

int64_t rbx_2 = 0

if (rax_8 != 0)
    sub_140599630(&data_1439aad30, 1)
    int64_t* rax_11 = (*rax_8)[6](rax_8, &arg_8)
    int64_t rbp_1 = sx.q(data_1439aad38)
    rbx_2 = *rax_11
    int32_t rax_12 = (rbp_1 + 1).d
    data_1439aad38 = rax_12
    
    if (rax_12 s> data_1439aad3c)
        sub_1405a4f90(&data_1439aad30)
    
    int64_t rcx_5 = data_1439aad30
    int64_t rax_14 = rbp_1 * 2
    *(rcx_5 + (rax_14 << 3)) = rax_8
    *(rcx_5 + (rax_14 << 3) + 8) = 3

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_6 = zx.q(data_14401b1a0)
data_143f52430 = rbx_2

if (data_143f52740 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_6 << 3))))
    _Init_thread_header(&data_143f52740)
    
    if (data_143f52740 == 0xffffffff)
        sub_140af4b30()
        void*** rax_16 = sub_140a84c80(0, 0x20, 0)
        
        if (rax_16 != 0)
            *rax_16 = &data_143311f28
            rax_16[2] = sub_140a387b0()
            *rax_16 = &data_143311f80
        
        data_143f52738 = 0
        
        if (rax_16 != 0)
            sub_140599630(&data_1439a04c0, 1)
            int64_t* rax_19 = (*rax_16)[6](rax_16, &arg_8)
            int64_t rbp_2 = sx.q(data_1439a04c8)
            int64_t rbx_3 = *rax_19
            int32_t rax_20 = (rbp_2 + 1).d
            data_1439a04c8 = rax_20
            
            if (rax_20 s> data_1439a04cc)
                sub_1405a4f90(&data_1439a04c0)
            
            void**** rax_23 = (rbp_2 << 4) + data_1439a04c0
            *rax_23 = rax_16
            rax_23[1].d = 2
            data_143f52738 = rbx_3
        
        _Init_thread_footer(&data_143f52740)

int32_t rax_15
rax_15.b = 1
return rax_15
