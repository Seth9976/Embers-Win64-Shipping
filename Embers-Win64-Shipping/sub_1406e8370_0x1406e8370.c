// 函数: sub_1406e8370
// 地址: 0x1406e8370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg1[1]
int32_t* r9_2 = *arg1
int64_t r10_2 = (arg3 - arg2) s/ 0x48
int64_t r8_2 = (r11 - r9_2) s/ 0x48
int32_t* result
void* rsi

if (r10_2 u<= r8_2)
    rsi = &r9_2[r10_2 * 0x12]
    int64_t rdx_15
    result, rdx_15 = sub_1406e85b0(arg2, arg3, r9_2)
    int64_t rdi_2 = arg1[1]
    
    if (rsi != rdi_2)
        void* rbx_3 = rsi + 0x40
        
        do
            int64_t* rcx_16 = *rbx_3
            
            if (rcx_16 != 0)
                int64_t r8_8 = *rcx_16
                rdx_15.b = rcx_16 != rbx_3 - 0x38
                (*(r8_8 + 0x20))(rcx_16, rdx_15, r8_8)
                *rbx_3 = 0
            
            rbx_3 += 0x48
            result = rbx_3 - 0x40
        while (result != rdi_2)
else
    int64_t rax_6
    int64_t rdx_2
    rdx_2:rax_6 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - r9_2)
    int64_t rdx_3 = rdx_2 s>> 2
    int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)
    
    if (r10_2 u> rdx_4)
        int64_t rbx_1 = 0x38e38e38e38e38e
        
        if (r10_2 u> 0x38e38e38e38e38e)
            sub_140610c20()
            noreturn
        
        uint64_t rcx_5 = rdx_4 u>> 1
        
        if (rdx_4 u<= 0x38e38e38e38e38e - rcx_5)
            rbx_1 = rcx_5 + rdx_4
            
            if (rbx_1 u< r10_2)
                rbx_1 = r10_2
        
        if (r9_2 != 0)
            sub_1406ebed0(arg1, r9_2, r11)
            void* r8_4 = *arg1
            int64_t rax_10
            int64_t rdx_6
            rdx_6:rax_10 = muls.dp.q(0xe38e38e38e38e39, arg1[2] - r8_4)
            int64_t rdx_7 = rdx_6 s>> 2
            
            if ((rdx_7 + (rdx_7 u>> 0x3f)) * 0x48 u>= 0x1000)
                void* rcx_9 = *(r8_4 - 8)
                
                if (r8_4 - rcx_9 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                r8_4 = rcx_9
            
            j_sub_140a74f90(r8_4)
            __builtin_memset(arg1, 0, 0x18)
        
        int32_t* rax_14 = sub_1406ec640(arg1, rbx_1)
        *arg1 = rax_14
        r9_2 = rax_14
        arg1[1] = rax_14
        r8_2 = 0
        arg1[2] = &r9_2[rbx_1 * 0x12]
    
    void* rbx_2 = arg2 + r8_2 * 0x48
    result = sub_1406e85b0(arg2, rbx_2, r9_2)
    rsi = arg1[1]
    
    if (rbx_2 != arg3)
        int32_t** rdi_1 = rsi + 0x40
        
        do
            result = zx.q(*rbx_2)
            *rsi = result.d
            *rdi_1 = nullptr
            int64_t* rcx_14 = *(rbx_2 + 0x40)
            
            if (rcx_14 != 0)
                result = (**rcx_14)(rcx_14, &rdi_1[-7])
                *rdi_1 = result
            
            rsi += 0x48
            rdi_1 = &rdi_1[9]
            rbx_2 += 0x48
        while (rbx_2 != arg3)

arg1[1] = rsi
return result
