// 函数: sub_14211cee0
// 地址: 0x14211cee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2[0x1a]
int64_t* r12 = arg2
char*** r15 = arg1

if (rbx != 0)
    int64_t* rax_1 = *arg1
    
    for (int64_t* i = *rax_1; i != &i[sx.q(rax_1[1].d)]; i = &i[1])
        if (*i == rbx)
            void* rax_3
            rax_3, arg3 = sub_142543020()
            arg2 = *(rbx + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s<= arg2[7].d && *(arg2[6] + (rax_4 << 3)) == rax_3 + 0x30)
                void* arg_8 = rbx
                void* rbx_1 = r15[1]
                void* rax_6 = *(rbx_1 + 0x10)
                void* rcx_2 = rbx_1 + 0x20
                
                if (rax_6 != 0)
                    rcx_2 = rax_6
                
                (*rbx_1)((*(*rcx_2 + 8))(rcx_2, arg2), &arg_8)
            
            break

arg2.b = 1
int64_t r14
int64_t var_28 = r14
(*(*r12 + 0x458))(r12, arg2)
char* result = sub_14212a140(r12, arg3)

if ((r12[0x1b].b & 1) != 0)
    int32_t* rax_10 = r15[2]
    *rax_10 += 1
    result = r15[3]
    
    if (*result != 0)
        void* rsi_1 = &r12[0x73]
        int64_t i_2 = 3
        int64_t i_1
        
        do
            int64_t j_1 = 4
            int64_t j
            
            do
                char** rbx_2 = r15[4]
                r14 = *rsi_1
                int64_t rdi_1 = sx.q(rbx_2[1].d)
                int32_t rax_11 = (rdi_1 + 1).d
                rbx_2[1].d = rax_11
                
                if (rax_11 s> *(rbx_2 + 0xc))
                    sub_1405a4d70(rbx_2)
                
                result = *rbx_2
                rsi_1 += 8
                *(result + (rdi_1 << 3)) = r14
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

char** r13_1 = *r15
int64_t rcx_7 = sx.q(r13_1[1].d)

if (rcx_7.d != 0)
    result = *r13_1
    int32_t r15_1 = 0
    int32_t rdi_2 = 0
    r14.b = *result != r12
    int64_t rbx_3 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_2)
        rbx_3 += 1
        rdi_2 += 1
        
        if (rbx_3 s< rcx_7)
            int64_t* rcx_8 = &(*r13_1)[rbx_3 << 3]
            
            do
                result.b = *rcx_8 != r12
                
                if (zx.d(r14.b) != result.d)
                    break
                
                rdi_2 += 1
                rbx_3 += 1
                rcx_8 = &rcx_8[1]
            while (rbx_3 s< rcx_7)
        
        int32_t rbp_2 = rdi_2 - r9_1.d
        
        if (r14.b != 0)
            if (r15_1 != r9_1.d)
                char* rcx_9 = *r13_1
                result = memmove(&rcx_9[sx.q(r15_1) << 3], &rcx_9[r9_1 << 3], rbp_2 << 3)
            
            r15_1 += rbp_2
        
        r14.b ^= 1
    while (rbx_3 s< rcx_7)
    
    r13_1[1].d = r15_1

return result
