// 函数: sub_140e10250
// 地址: 0x140e10250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x170)
int32_t rbx = 0
int128_t zmm6 = arg3
uint128_t zmm7 = arg2

if (result s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        char rax_1
        rax_1, zmm6, zmm7 = sub_140d9f790(*(rsi_1 + *(arg1 + 0x168)), zmm7, zmm6)
        
        if (rax_1 == 1)
            rbx += 1
            rsi_1 = &rsi_1[2]
        else if (rbx s>= 0 && rbx s< *(arg1 + 0x170))
            void* rcx_1 = data_143e20d08
            
            if (rcx_1 != 0)
                sub_140dc00e0(rcx_1, (sx.q(rbx) << 4) + *(arg1 + 0x168))
            
            sub_140dbae50(arg1 + 0x168, rbx, 1, 1)
        
        result = *(arg1 + 0x170)
    while (rbx s< result)

if (result == 0)
    *(arg1 + 0x2e) &= 0xf7
    result = sub_140db3510(arg1 + 0x18)
    
    if (result.b != 0)
        return sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

return result
