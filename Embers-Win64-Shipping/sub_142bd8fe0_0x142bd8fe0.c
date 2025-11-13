// 函数: sub_142bd8fe0
// 地址: 0x142bd8fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x28)
int32_t r15 = 0
uint64_t rdi = zx.q(arg4)
int32_t i_1 = *(arg1 + 0x20)
int32_t r10 = 0
uint64_t rbp = zx.q(arg3)
uint64_t rsi = zx.q(arg2)

if (i_1 != 0)
    int32_t i
    
    do
        int32_t r8 = *rbx
        
        if (rsi.d u< r8 && (zx.d(*((sx.q(rsi.d) s>> 3) + *(rbx + 8))) & 0x80 s>> (rsi.b & 7)) != 0)
            break
        
        if (rbp.d u< r8 && (zx.d(*((sx.q(rbp.d) s>> 3) + *(rbx + 8))) & 0x80 s>> (rbp.b & 7)) != 0)
            break
        
        if (rdi.d u< r8 && (zx.d(*((sx.q(rdi.d) s>> 3) + *(rbx + 8))) & 0x80 s>> (rdi.b & 7)) != 0)
            break
        
        rbx = &rbx[6]
        i = i_1
        i_1 -= 1
    while (i != 1)
    r15 = 0

int64_t r13_5 = arg5

if (i_1 != 0)
    goto label_142bd9166

r10 = 0
int32_t r8_1 = *(arg1 + 0x24)
uint64_t r13_4 = zx.q(*(arg1 + 0x20) + 1)

if (r13_4.d u<= r8_1)
    goto label_142bd912e

int32_t arg_8 = 0
int32_t rcx_10 = (r13_4 + 7).d & 0xfffffff8
int64_t rax_10 = sub_142b99a90(arg5, 0x18, r8_1, rcx_10, *(arg1 + 0x28), &arg_8)
r10 = arg_8
*(arg1 + 0x28) = rax_10

if (r10 == 0)
    *(arg1 + 0x24) = rcx_10
label_142bd912e:
    int64_t rax_12 = *(arg1 + 0x28)
    *(rax_12 + ((r13_4 * 3 - 3) << 3)) = 0
    rbx = rax_12 + ((r13_4 * 3 - 3) << 3)
    rbx[4] = 0
    *(arg1 + 0x20) = r13_4.d
    
    if (r10 == 0)
        r13_5 = arg5
    label_142bd9166:
        
        if (rsi.d s>= 0)
            r10 = 0
            char* rdx_9
            
            if (rsi.d u< *rbx)
                rdx_9 = (rsi u>> 3) + *(rbx + 8)
                *rdx_9 |= (0x80 s>> (rsi.b & 7)).b
            else
                int32_t r12_1 = (rsi + 1).d
                int32_t rax_13 = sub_142bd9f00(rbx, r12_1, r13_5)
                r10 = rax_13
                
                if (rax_13 == 0)
                    *rbx = r12_1
                    rdx_9 = (rsi u>> 3) + *(rbx + 8)
                    *rdx_9 |= (0x80 s>> (rsi.b & 7)).b
        
        if (rsi.d s< 0 || r10 == 0)
            if (rbp.d s>= 0)
                r10 = 0
                char* rdx_13
                
                if (rbp.d u< *rbx)
                    rdx_13 = (rbp u>> 3) + *(rbx + 8)
                    *rdx_13 |= (0x80 s>> (rbp.b & 7)).b
                else
                    int32_t rsi_2 = (rbp + 1).d
                    int32_t rax_15 = sub_142bd9f00(rbx, rsi_2, r13_5)
                    r10 = rax_15
                    
                    if (rax_15 == 0)
                        *rbx = rsi_2
                        rdx_13 = (rbp u>> 3) + *(rbx + 8)
                        *rdx_13 |= (0x80 s>> (rbp.b & 7)).b
            
            if ((rbp.d s< 0 || r10 == 0) && rdi.d s>= 0)
                char* rdx_17
                
                if (rdi.d u< *rbx)
                    rdx_17 = (rdi u>> 3) + *(rbx + 8)
                    *rdx_17 |= (0x80 s>> (rdi.b & 7)).b
                else
                    int32_t rsi_3 = (rdi + 1).d
                    int32_t rax_17 = sub_142bd9f00(rbx, rsi_3, r13_5)
                    r15 = rax_17
                    
                    if (rax_17 == 0)
                        *rbx = rsi_3
                        rdx_17 = (rdi u>> 3) + *(rbx + 8)
                        *rdx_17 |= (0x80 s>> (rdi.b & 7)).b
                return zx.q(r15)

return zx.q(r10)
