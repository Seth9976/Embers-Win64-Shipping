// 函数: sub_142a8b300
// 地址: 0x142a8b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg5
int64_t r13
r13.b = 1
char rbp = 1
char* result = sub_142a8a110(arg1, arg2, arg4, rdi)
char* result_1 = result

if (*rdi s<= 0)
    char* r9_1 = *(result + 0x10)
    int32_t r14_1 = 0
    int32_t rax_1
    rax_1.b = r9_1 != 0
    int32_t rcx = rax_1 + 1
    
    if (*(result_1 + 0x18) == 0)
        rcx = rax_1
    
    int32_t rax_2 = rcx + 1
    
    if (*(result_1 + 0x20) == 0)
        rax_2 = rcx
    
    if (rax_2 == 0)
        r9_1 = *(result_1 + 8)
    
    void* rax_3 = r9_1
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_3)
        i = zx.d(*(rax_3 + &data_143641734 - r9_1))
        
        if (rdx != i)
            break
        
        rax_3 += 1
    while (i != 0)
    
    int64_t r12_1 = -1
    
    if (rdx - i != 0)
        int64_t rcx_1 = -1
        
        do
            rcx_1 += 1
        while (r9_1[rcx_1] != 0)
        
        if (rcx_1.d s> 0)
            (*(*arg3 + 8))(arg3, r9_1, zx.q(rcx_1.d))
            r13.b = 0
    
    char* r15_1 = *(result_1 + 0x28)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (r15_1[rdi_1] != 0)
    
    char var_38
    
    if (rdi_1.d s> 0)
        (*(*arg3 + 8))(arg3, &data_143613f98, 1)
        r13.b = 0
        var_38 = sub_142a863a0(zx.d(*r15_1))
        (*(*arg3 + 8))(arg3, &var_38, 1)
        (*(*arg3 + 8))(arg3, &r15_1[1], zx.q((rdi_1 - 1).d))
    
    char* rdi_2 = *(result_1 + 0x30)
    int64_t rax_9 = -1
    
    do
        rax_9 += 1
    while (rdi_2[rax_9] != 0)
    
    if (rax_9.d s> 0)
        (*(*arg3 + 8))(arg3, &data_143613f98, 1)
        char i_1 = *rdi_2
        r13.b = 0
        
        while (i_1 != 0)
            var_38 = sub_142a863a0(zx.d(i_1))
            (*(*arg3 + 8))(arg3, &var_38, 1)
            i_1 = rdi_2[1]
            rdi_2 = &rdi_2[1]
        
        rbp = 0
    
    void* i_2 = *(result_1 + 0x38)
    int32_t r15_2 = 0
    
    if (i_2 != 0)
        do
            i_2 = *(i_2 + 8)
            r15_2 += 1
        while (i_2 != 0)
        
        if (r15_2 s> 0)
            if (rbp != 0)
                (*(*arg3 + 8))(arg3, &data_143613f98, 1)
                r13.b = 0
            
            int32_t rbp_1 = 0
            
            if (r15_2 s> 0)
                do
                    int64_t* i_3 = *(result_1 + 0x38)
                    char* rdi_3 = nullptr
                    int32_t rcx_11 = 0
                    
                    while (i_3 != 0)
                        if (rcx_11 == rbp_1)
                            rdi_3 = *i_3
                            break
                        
                        i_3 = i_3[1]
                        rcx_11 += 1
                    
                    (*(*arg3 + 8))(arg3, &data_143613f98, 1)
                    char i_4 = *rdi_3
                    
                    while (i_4 != 0)
                        var_38 = sub_142a863a0(zx.d(i_4))
                        (*(*arg3 + 8))(arg3, &var_38, 1)
                        i_4 = rdi_3[1]
                        rdi_3 = &rdi_3[1]
                    
                    rbp_1 += 1
                while (rbp_1 s< r15_2)
    
    void* i_5 = *(result_1 + 0x40)
    
    if (i_5 == 0)
    label_142a8b573:
        result = *(result_1 + 0x48)
        
        do
            r12_1 += 1
        while (result[r12_1] != 0)
        
        if (r12_1 != 0)
            goto label_142a8b597
    else
        do
            i_5 = *(i_5 + 0x10)
            r14_1 += 1
        while (i_5 != 0)
        
        if (r14_1 s<= 0)
            goto label_142a8b573
        
    label_142a8b597:
        
        if (r13.b != 0 && r14_1 s> 0)
            (*(*arg3 + 8))(arg3, &data_143641734, 3)
        
        result = sub_142a87450(result_1, arg3, arg5)

if (result_1 == 0)
    return result

return sub_142a8a0a0(result_1) __tailcall
