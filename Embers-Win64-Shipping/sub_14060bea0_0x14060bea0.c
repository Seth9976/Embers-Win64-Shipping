// 函数: sub_14060bea0
// 地址: 0x14060bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t rdi = arg3
void* i = (arg2 - arg1) & 0xfffffffffffffff8
int64_t* r13 = arg2
int64_t* rbx = arg1

for (; i s> 0x100; i = (r13 - rbx) & 0xfffffffffffffff8)
    if (rdi s<= 0)
        i = (r13 - rbx) s>> 3
        int64_t j = i s>> 1
        
        if (j s> 0)
            void* j_3 = i - 1
            int64_t r15_2 = j_3 s>> 1
            
            do
                int64_t r12_1 = rbx[j - 1]
                j -= 1
                void* j_1 = j
                int64_t j_2 = j
                
                if (j s< r15_2)
                    do
                        j_2 = (j_2 << 1) + 2
                        
                        if (arg4(rbx[j_2], rbx[j_2 - 1]) != 0)
                            j_2 -= 1
                        
                        rbx[j_1] = rbx[j_2]
                        j_1 = j_2
                    while (j_2 s< r15_2)
                    
                    j_3 = i - 1
                
                if (j_2 == r15_2 && (i.b & 1) == 0)
                    rbx[j_1] = rbx[i - 1]
                    j_1 = j_3
                
                if (j s< j_1)
                    int64_t j_4
                    
                    do
                        j_4 = (j_1 - 1) s>> 1
                        
                        if (arg4(rbx[j_4], r12_1) == 0)
                            break
                        
                        rbx[j_1] = rbx[j_4]
                        j_1 = j_4
                    while (j s< j_4)
                
                rbx[j_1] = r12_1
                j_3 = i - 1
            while (j s> 0)
            
            r13 = arg_10
        
        if (i s>= 2)
            void* r12_2 = &r13[-1]
            
            do
                int64_t r13_2 = *r12_2
                int64_t r15_5 = (r12_2 - rbx) s>> 3
                void* k_1 = nullptr
                void* k_3 = nullptr
                *r12_2 = *rbx
                void* k_2 = r15_5 - 1
                int64_t rbp_5 = k_2 s>> 1
                
                if (rbp_5 s> 0)
                    do
                        k_3 = (k_3 << 1) + 2
                        
                        if (arg4(rbx[k_3], rbx[k_3 - 1]) != 0)
                            k_3 -= 1
                        
                        rbx[k_1] = rbx[k_3]
                        k_1 = k_3
                    while (k_3 s< rbp_5)
                    
                    k_2 = r15_5 - 1
                
                if (k_3 == rbp_5 && (r15_5.b & 1) == 0)
                    rbx[k_1] = rbx[r15_5 - 1]
                    k_1 = k_2
                
                if (k_1 s> 0)
                    int64_t k
                    
                    do
                        k = (k_1 - 1) s>> 1
                        
                        if (arg4(rbx[k], r13_2) == 0)
                            break
                        
                        rbx[k_1] = rbx[k]
                        k_1 = k
                    while (k s> 0)
                
                r12_2 -= 8
                rbx[k_1] = r13_2
                i = (8 - rbx + r12_2) & 0xfffffffffffffff8
            while (i s>= 0x10)
        
        goto label_14060c1d2
    
    int64_t* var_48
    struct std::pair<struct SYMTYPE **, struct SYMTYPE **> __cdecl std::_Partition_by_median_guess_unchecked<struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *)>(struct SYMTYPE **, struct SYMTYPE **, bool (__cdecl *)(struct SYMTYPE *, struct SYMTYPE *))(
        &var_48, rbx, r13, arg4, arg5)
    int64_t* rbp_1 = var_48
    rdi = (rdi s>> 1) + (rdi s>> 2)
    int64_t* var_40
    
    if (((rbp_1 - rbx) & 0xfffffffffffffff8) s>= ((r13 - var_40) & 0xfffffffffffffff8))
        arg5 = sub_14060bea0(var_40, r13, rdi, arg4)
        r13 = rbp_1
        arg_10 = rbp_1
    else
        arg5 = sub_14060bea0(rbx, rbp_1, rdi, arg4)
        rbx = var_40

if (rbx != r13)
    for (void* i_1 = &rbx[1]; i_1 != r13; i_1 += 8)
        int64_t rbp_2 = *i_1
        void* i_2 = i_1
        
        if (arg4(rbp_2, *rbx) == 0)
            void* i_3 = i_1 - 8
            i = arg4(rbp_2, *(i_1 - 8))
            
            while (i.b != 0)
                *i_2 = *i_3
                i_2 = i_3
                int64_t rdx_10 = *(i_3 - 8)
                i_3 -= 8
                i = arg4(rbp_2, rdx_10)
            
            *i_2 = rbp_2
        else
            int64_t r8_3 = i_1 - rbx
            i = memmove(i_1 - r8_3 + 8, rbx, r8_3.d)
            *rbx = rbp_2

label_14060c1d2:
return i
