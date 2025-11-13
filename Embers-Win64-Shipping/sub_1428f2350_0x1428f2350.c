// 函数: sub_1428f2350
// 地址: 0x1428f2350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r15 = 0
int32_t* result = sub_1428e91e0(arg2)

if (result == 0)
    return result

if (*arg1 == 0)
    int32_t rsi_1 = 0
    
    if (sub_142898c70(result) s> 0)
        int32_t rax_5
        
        do
            int64_t rdi_1 = *(sub_142898ea0(result, rsi_1) + 8)
            
            if (*arg1 == 0)
                int64_t rax_2 = sub_1428c3490()
                *arg1 = rax_2
                
                if (rax_2 == 0)
                    goto label_1428f2473
            
            void* const rbx_1 = &data_143517220
            
            do
                char* rax_3 = *(rbx_1 + 0x10)
                void* r8_2 = rdi_1 - rax_3
                uint32_t i
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rax_3)
                    i = zx.d(*(rax_3 + r8_2))
                    
                    if (rdx_1 != i)
                        break
                    
                    rax_3 = &rax_3[1]
                while (i != 0)
                
                if (rdx_1 - i == 0)
                    if (sub_14291c060(*arg1, *rbx_1, 1) == 0)
                        goto label_1428f2473
                    
                    goto label_1428f2437
                
                rbx_1 += 0x18
            while (*(rbx_1 + 8) != 0)
            
        label_1428f2437:
            
            if (*(rbx_1 + 8) == 0)
                goto label_1428f2473
            
            rsi_1 += 1
            rax_5 = sub_142898c70(result)
        while (rsi_1 s< rax_5)
    
    r15 = 1

label_1428f2473:
sub_142898cb0(result, sub_1428e8d70)
return zx.q(r15)
