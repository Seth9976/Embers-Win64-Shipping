// 函数: sub_142863be0
// 地址: 0x142863be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rbp = *(arg2 + 0x488)
int32_t r14 = 0xb
int32_t rax_1 = *(rbp + 0x1c) & 0x30000
int64_t i_1
int16_t* rdi_1

if (rax_1 == 0x10000)
    i_1 = 1
    rdi_1 = &data_1434dc724
else if (rax_1 == 0x20000)
    rdi_1 = &data_1434dc726
    i_1 = 1
else if (rax_1 == 0x30000)
    i_1 = 2
    rdi_1 = &data_1434dc724
else
    if (*(arg2 + 0x38) == 1)
        rdi_1 = *(rbp + 0x1a8)
    
    if (*(arg2 + 0x38) != 1 || rdi_1 == 0)
        rdi_1 = *(rbp + 0x198)
        
        if (rdi_1 != 0)
            i_1 = *(rbp + 0x1a0)
            goto label_142863c5a
        
        rdi_1 = &data_1434dc6f0
        i_1 = 0x1a
    else
        i_1 = *(rbp + 0x1b0)
    label_142863c5a:
        
        if (i_1 == 0)
            *arg1 |= 0xb
            return rax_1

void* j
int64_t i

do
    void* rbx_1 = &data_1434dc750
    
    for (j = nullptr; j u< 0x1a; )
        if (*(rbx_1 + 8) == *rdi_1)
            j = sub_1428541e0(sx.q(*(rbx_1 + 0x18)))
            void* j_1 = j
            
            if (j != 0 && (*(j + 4) & r14) != 0)
                j = sub_142864400(arg2, arg3, rbx_1)
                
                if (j.d != 0)
                    j = zx.q(not.d(*(j_1 + 4)))
                    r14 &= j.d
            
            break
        
        j += 1
        rbx_1 += 0x28
    
    rdi_1 = &rdi_1[1]
    i = i_1
    i_1 -= 1
while (i != 1)
*arg1 |= r14
return j
