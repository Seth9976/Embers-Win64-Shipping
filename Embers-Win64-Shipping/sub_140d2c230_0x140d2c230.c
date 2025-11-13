// 函数: sub_140d2c230
// 地址: 0x140d2c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
EnterCriticalSection(&data_143e1d620)
int32_t r8 = (data_1439aaaa8.q).d
int32_t r10 = (data_1439aaad4.q).d

if (r8 == r10)
    EnterCriticalSection(&data_143e1da90)
    int64_t rsi_1 = sx.q(data_143e1da88)
    int32_t rax_1 = (rsi_1 + 1).d
    bool cond:0_1 = rax_1 s<= data_143e1da8c
    data_143e1da88 = rax_1
    
    if (not(cond:0_1))
        sub_1405a4d70(&data_143e1da80)
    
    *(data_143e1da80 + (rsi_1 << 3)) = &data_1439aaa90
    LeaveCriticalSection(&data_143e1da90)
    r10 = (data_1439aaad4.q).d
    r8 = (data_1439aaaa8.q).d

int64_t arg_8 = arg1
uint32_t rcx_1 = (arg1 u>> 4).d
int32_t rdx_2 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t r9_2 = neg.d(rdx_2 + rcx_1) ^ rdx_2 u>> 0xd
int32_t rcx_4 = (rcx_1 - rdx_2 - r9_2) ^ r9_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_4 - r9_2) ^ rcx_4 << 0x10
int32_t r9_5 = (r9_2 - rdx_5 - rcx_4) ^ rdx_5 u>> 5
int32_t rcx_7 = (rcx_4 - rdx_5 - r9_5) ^ r9_5 u>> 3
int32_t rdx_8 = (rdx_5 - rcx_7 - r9_5) ^ rcx_7 << 0xa
int32_t r9_8 = (r9_5 - rdx_8 - rcx_7) ^ rdx_8 u>> 0xf
int64_t* rdi_1

if (r8 == r10)
labelid_2c:
    rdi_1 = sub_140d14510(&data_1439aaaa0, r9_8, &arg_8)
else
    void* rcx_8 = data_1439aaae0
    void* rax_18 = &data_1439aaad8
    
    if (rcx_8 != 0)
        rax_18 = rcx_8
    
    int32_t rax_19 = *(rax_18 + (((sx.q(data_1439aaae8) - 1) & sx.q(r9_8)) << 2))
    
    if (rax_19 == 0xffffffff)
    label_140d2c3c1:
        rdi_1 = sub_140d14510(&data_1439aaaa0, r9_8, &arg_8)
    else
        int64_t r8_1 = data_1439aaaa0
        int64_t rdx_14
        
        while (true)
            rdx_14 = sx.q(rax_19) * 0x60
            
            if (*(rdx_14 + r8_1) == arg1)
                break
            
            rax_19 = *(rdx_14 + r8_1 + 0x58)
            
            if (rax_19 == 0xffffffff)
                goto label_140d2c3c1_2
        
        if (rax_19 == 0xffffffff)
        label_140d2c3c1_1:
            rdi_1 = sub_140d14510(&data_1439aaaa0, r9_8, &arg_8)
        else
            void* rax_25 = rdx_14 + r8_1
            
            if (rax_25 == 0)
            label_140d2c3c1_2:
                rdi_1 = sub_140d14510(&data_1439aaaa0, r9_8, &arg_8)
            else
                rdi_1 = rax_25 + 8

void* rax_23 = sub_140d147e0(rdi_1, sub_140b5ead0(arg2.d) + arg_10:4.d, &arg_10)

if (*rax_23 == 0)
    void*** rax_24 = j_sub_140a82f30(0x20)
    
    if (rax_24 == 0)
        rax_24 = nullptr
    else
        rax_24[1].d = 1
        *rax_24 = &data_142df7bd8
        *(rax_24 + 0xc) = 1
        rax_24[2] = 0
        rax_24[3] = 0
    
    void*** rbx_1 = rax_24
    void*** rdi_2 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = rax_24
    
    void var_38
    
    if (rax_23 == &var_38)
    label_140d2c4a2:
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d != 1)
                rbx_1 = rax_24
            else
                (**rdi_2)(rdi_2)
                int32_t temp2_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rbx_1 = rax_24
                else
                    (*rdi_2)[1](rdi_2, 1)
                    rbx_1 = rax_24
    else
        *rax_23 = &rax_24[2]
        void*** rsi_2 = *(rax_23 + 8)
        
        if (rdi_2 == rsi_2)
            goto label_140d2c4a2
        
        *(rax_23 + 8) = rdi_2
        
        if (rsi_2 != 0)
            rsi_2[1].d -= 1
            
            if (rsi_2[1].d != 1)
                rbx_1 = rax_24
            else
                (**rsi_2)(rsi_2)
                int32_t temp5_1 = *(rsi_2 + 0xc)
                *(rsi_2 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rbx_1 = rax_24
                else
                    (*rsi_2)[1](rsi_2, 1)
                    rbx_1 = rax_24
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)

int64_t* rbx_2 = *rax_23

if (rbx_2 != arg3)
    int64_t rcx_18 = *rbx_2
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    *rbx_2 = *arg3
    *arg3 = 0
    rbx_2[1].d = arg3[1].d
    *(rbx_2 + 0xc) = *(arg3 + 0xc)
    arg3[1] = 0

int64_t result = LeaveCriticalSection(&data_143e1d620)
int64_t rcx_19 = *arg3

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19) __tailcall
