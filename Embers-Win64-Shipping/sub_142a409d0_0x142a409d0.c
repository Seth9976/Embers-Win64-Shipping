// 函数: sub_142a409d0
// 地址: 0x142a409d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* i_1 = *arg2
char* i_4 = nullptr
char* i_2 = nullptr
int64_t rdi = 0

if (i_1 != 0)
    char* i
    
    do
        i = *(i_1 + 0x40)
        
        if ((*(i_1 + 0x28) & 0xfffffffffffffffc) != 0)
            int64_t* j_4
            int64_t rax_2
            int64_t rdx
            
            do
                rdx = *(i_1 + 0x28)
                j_4 = rdx & 0xfffffffffffffffc
                rax_2 = rdx
                
                if (rax_2 == *(i_1 + 0x28))
                    *(i_1 + 0x28) = zx.q(rdx.d) & 3
                else
                    rax_2 = *(i_1 + 0x28)
            while (rdx != rax_2)
            
            if (j_4 != 0)
                int64_t* j = *j_4
                int64_t rcx_2 = 1
                int64_t* j_2 = j_4
                
                for (; j != 0; j = *j)
                    j_2 = j
                    rcx_2 += 1
                
                *j_2 = *(i_1 + 0x18)
                *(i_1 + 0x18) = j_4
                *(i_1 + 0x20)
                *(i_1 + 0x20) += neg.q(rcx_2)
                *(i_1 + 0x10) -= rcx_2
        
        int64_t rax_7 = *(i_1 + 0x18)
        
        if (rax_7 == 0)
            goto label_142a40ab4
        
        if (*(i_1 + 8) != 0)
        label_142a40aba:
            
            if (rdi u>= 8)
                break
            
            if (*(i_1 + 0x10) != *(i_1 + 0x20))
                break
            
            rdi += 1
            
            if (i_2 != 0)
                sub_142a40080(i_2, arg2, 0)
            
            i_2 = i_1
        else
            *(i_1 + 8) = rax_7
            *(i_1 + 0x18) = 0
            i_1[7] = 0
        label_142a40ab4:
            
            if (*(i_1 + 8) != 0)
                goto label_142a40aba
            
            if (*(i_1 + 2) u< *(i_1 + 4))
                *arg1
                sub_142a40670(arg1, i_1)
                break
            
            int64_t rax_11
            int64_t r8_2
            
            do
                r8_2 = *(i_1 + 0x28)
                int64_t rcx_4 = r8_2
                int32_t rdx_4 = r8_2.d & 3
                
                if (rdx_4 u< 2)
                    rcx_4 = (rcx_4 & 0xfffffffffffffffd) | 1
                
                if ((rcx_4.d & 3) == rdx_4)
                    break
                
                rax_11 = r8_2
                
                if (rax_11 == *(i_1 + 0x28))
                    *(i_1 + 0x28) = rcx_4
                else
                    rax_11 = *(i_1 + 0x28)
            while (r8_2 != rax_11)
            
            if ((i_1[6] & 1) == 0)
                sub_142a40920(*(i_1 + 0x38) + 0xb08, arg2, i_1)
                
                if ((*(i_1 + 0x28) & 0xfffffffffffffffc) != 0)
                    int64_t* j_5
                    int64_t rax_13
                    int64_t rdx_6
                    
                    do
                        rdx_6 = *(i_1 + 0x28)
                        j_5 = rdx_6 & 0xfffffffffffffffc
                        rax_13 = rdx_6
                        
                        if (rax_13 == *(i_1 + 0x28))
                            *(i_1 + 0x28) = zx.q(rdx_6.d) & 3
                        else
                            rax_13 = *(i_1 + 0x28)
                    while (rdx_6 != rax_13)
                    
                    if (j_5 != 0)
                        int64_t* j_1 = *j_5
                        int64_t rcx_10 = 1
                        int64_t* j_3 = j_5
                        
                        for (; j_1 != 0; j_1 = *j_1)
                            j_3 = j_1
                            rcx_10 += 1
                        
                        *j_3 = *(i_1 + 0x18)
                        *(i_1 + 0x18) = j_5
                        *(i_1 + 0x20)
                        *(i_1 + 0x20) += neg.q(rcx_10)
                        *(i_1 + 0x10) -= rcx_10
                
                int64_t rax_18 = *(i_1 + 0x18)
                
                if (rax_18 != 0 && *(i_1 + 8) == 0)
                    *(i_1 + 8) = rax_18
                    *(i_1 + 0x18) = 0
                    i_1[7] = 0
        
        i_1 = i
    while (i != 0)

char* i_3 = i_2

if (i_1 != 0)
    i_4 = i_2

if (i_1 != 0)
    i_3 = i_1

if (i_4 != 0)
    sub_142a40080(i_4, arg2, 0)

if (i_3 != 0)
    return i_3

int64_t rbx = *arg2

if (arg1[0x169].b == i_3.b && sub_142a3f180(arg1, 0, *arg1 + 0x18) != 0)
    char* rax_20 = *arg2
    
    if (rbx != rax_20 && *(rax_20 + 8) != i_3)
        return rax_20

return sub_142a407b0(arg1, arg2, arg2[2]) __tailcall
