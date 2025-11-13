// 函数: sub_14228ff40
// 地址: 0x14228ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)
void* rsi = arg2

if ((result.b & 1) != 0)
    result = (result s>> 1) + arg1 + 0x20

if (result != 0)
    goto label_14228ff85

if (arg3 != 0)
    result = sub_14228fdd0(arg1, *(arg1 + 0x38))
label_14228ff85:
    
    if (arg3 != 0)
        int32_t r14_1 = *(arg1 + 0x34)
        int32_t rdx_1 = r14_1 + arg3
        *(arg1 + 0x34) = rdx_1
        void* rcx = *(arg1 + 0x20)
        
        if ((rcx.b & 1) != 0)
            rcx = (rcx s>> 1) + arg1 + 0x20
        
        result = (*(*rcx + 8))(rcx, rdx_1, 0)
        
        if (*(arg1 + 0x34) u> 0)
            void* rcx_2 = *(arg1 + 0x20)
            
            if ((rcx_2.b & 1) != 0)
                rcx_2 = (rcx_2 s>> 1) + arg1 + 0x20
            
            result = (*(*rcx_2 + 0x30))(rcx_2)
            int32_t r8 = 0
            *(arg1 + 0x28) = result
            
            if (arg3 != 0)
                do
                    int64_t zmm0 = *rsi
                    uint64_t rdx_3 = zx.q((r8 + r14_1) * *(arg1 + 0x30))
                    rsi += 0x74
                    r8 += 1
                    int64_t* rdx_4 = rdx_3 + *(arg1 + 0x28)
                    *rdx_4 = zmm0
                    result = zx.q(*(rsi - 0x6c))
                    rdx_4[1].d = result.d
                while (r8 u< arg3)

return result
