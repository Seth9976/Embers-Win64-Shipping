// 函数: sub_142397bb0
// 地址: 0x142397bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int128_t zmm6 = zx.o(0)
int32_t result = (zx.o(0)).d

if (*(arg1 + 0x348) s> 0)
    int64_t* rsi_1 = nullptr
    
    while (true)
        int64_t* rcx = *(rsi_1 + *(arg1 + 0x340))
        
        if (rcx == 0)
            goto label_142397c23
        
        void* rcx_1 = *rcx
        
        if (rcx_1 == 0)
        label_142397c20:
            result = zmm6.d
        label_142397c23:
            rdi += 1
            rsi_1 = &rsi_1[1]
            
            if (rdi s< *(arg1 + 0x348))
                continue
            else if (result f<= zmm6.d)
                break
        else
            void* rax_2 = Concurrency::details::_CancellationTokenRegistration::_GetToken(rcx_1)
            
            if (rax_2 == 0)
                goto label_142397c20
            
            char rax_3
            rax_3, zmm6 = sub_1420e6500(rax_2)
            
            if (rax_3 != 0)
                goto label_142397c20
            
            result = *(rax_2 + 0x520)
            
            if (not(result f> zmm6.d))
                goto label_142397c23
        
        result = result f- 0.5f
        *(arg1 + 0x384) = result
        break

return result
