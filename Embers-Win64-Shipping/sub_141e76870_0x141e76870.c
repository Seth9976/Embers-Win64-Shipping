// 函数: sub_141e76870
// 地址: 0x141e76870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f39bac

if (rsi == 0)
    int64_t* rax_1 = sub_142475900()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx = *rax_1
        (*(rdx + 0x390))(rax_1, rdx)
        rax_2 = rax_1[0x23]
    
    rsi = *(rax_2 + 0x100)

EnterCriticalSection(arg1 + 0xf8)
void* rbp_1 = *arg2
void* rdi
void arg_8

if (rbp_1 == 0)
label_141e76942:
    rdi.b = 0
else if (*sub_140865c40(arg1 + 0x10, &arg_8, rbp_1) == 0xffffffff)
label_141e76942_1:
    rdi.b = 0
else
    int64_t rax_4 = sx.q(*(arg1 + 0x68))
    
    if (rax_4.d s>= rsi)
        int32_t r8_2 = 0
        
        if (rax_4.d s<= 0)
        label_141e76942_2:
            rdi.b = 0
        else
            int64_t* rdx_2 = *(arg1 + 0x60)
            int64_t rcx_3 = 0
            
            while (true)
                int64_t* r9_1 = *(*rdx_2 + 0x10)
                
                if (r9_1 != 0)
                    void* r10_1 = *r9_1
                    
                    if (r10_1 != 0 && *(r10_1 + 0x164) s>= *(rbp_1 + 0x164))
                        r8_2 += 1
                        rcx_3 += 1
                        rdx_2 = &rdx_2[1]
                        
                        if (rcx_3 s>= rax_4)
                            goto label_141e76942_2
                        
                        continue
                
                rdi.b = r8_2 s< rsi
                break
    else
        rdi.b = 1

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return zx.q(rdi.b)
