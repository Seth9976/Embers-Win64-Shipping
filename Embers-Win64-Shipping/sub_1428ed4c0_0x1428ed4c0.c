// 函数: sub_1428ed4c0
// 地址: 0x1428ed4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t count = sx.q(arg3)
int64_t result

if (arg2 == 0 || arg1 == arg2)
label_1428ed681:
    result = 1
else if (arg1 == 0)
label_1428ed6ae:
    result = 0
else
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    
    if (sub_142898c70(arg2) s<= 0)
    label_1428ed681_1:
        result = 1
    else
        while (true)
            int32_t* rax_3 = sub_142898ea0(arg2, r14_1)
            
            if (rax_3 == 0)
                break
            
            int32_t rax_4 = *rax_3
            void buffer2_1
            int32_t* rdx_4
            
            if (rax_4 == 0)
                if (sub_1428ed6c0(&buffer2_1, *(rax_3 + 8), count.d, 0) == 0)
                    break
                
                rdx_4 = *(rax_3 + 8)
            else
                if (rax_4 != 1)
                    break
                
                if (sub_1428ed6c0(&buffer2_1, **(rax_3 + 8), count.d, 0) == 0)
                    break
                
                rdx_4 = *(*(rax_3 + 8) + 8)
            
            void buffer2
            
            if (sub_1428ed6c0(&buffer2, rdx_4, count.d, 0xff) == 0)
                break
            
            while (true)
                if (rdi_1 s>= sub_142898c70(arg1))
                    goto label_1428ed6ae
                
                int32_t* rax_9 = sub_142898ea0(arg1, rdi_1)
                
                if (rax_9 == 0)
                    goto label_1428ed6ae
                
                int32_t rcx_7 = *rax_9
                void buffer1_1
                int32_t* rdx_10
                
                if (rcx_7 == 0)
                    if (sub_1428ed6c0(&buffer1_1, *(rax_9 + 8), count.d, 0) == 0)
                        goto label_1428ed6ae
                    
                    rdx_10 = *(rax_9 + 8)
                else
                    if (rcx_7 != 1)
                        goto label_1428ed6ae
                    
                    if (sub_1428ed6c0(&buffer1_1, **(rax_9 + 8), count.d, 0) == 0)
                        goto label_1428ed6ae
                    
                    rdx_10 = *(*(rax_9 + 8) + 8)
                
                void buffer1
                
                if (sub_1428ed6c0(&buffer1, rdx_10, count.d, 0xff) == 0)
                    goto label_1428ed6ae
                
                if (memcmp(&buffer1, &buffer2, count) s>= 0)
                    if (memcmp(&buffer1_1, &buffer2_1, count) s> 0)
                        goto label_1428ed6ae
                    
                    r14_1 += 1
                    
                    if (r14_1 s< sub_142898c70(arg2))
                        break
                    
                    goto label_1428ed681_1
                
                rdi_1 += 1
        
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_98)
return result
