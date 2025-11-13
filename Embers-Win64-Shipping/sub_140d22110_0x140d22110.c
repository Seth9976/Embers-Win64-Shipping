// 函数: sub_140d22110
// 地址: 0x140d22110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1d620)
*arg1 = 0
arg1[1] = 0
int32_t var_38
sub_140ba6ab0(&data_1439aaaa0, &var_38, arg2)
int64_t rax = sx.q(var_38)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x60 + data_1439aaaa0

int64_t* rdi_1 = rax_3 + 8

if (rax_3 == 0)
    rdi_1 = nullptr

if (rdi_1 != 0)
    int64_t* rdx_6
    
    if (rdi_1[1].d == *(rdi_1 + 0x34))
    label_140d221de:
        rdx_6 = nullptr
    else
        int32_t rax_6 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8_1 = &rdi_1[7]
        void* rcx_1 = *(r8_1 + 8)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_8 = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
        label_140d221de_1:
            rdx_6 = nullptr
        else
            while (true)
                rdx_6 = (sx.q(rax_8) << 5) + *rdi_1
                
                if (*rdx_6 == arg3)
                    break
                
                rax_8 = rdx_6[3].d
                
                if (rax_8 == 0xffffffff)
                    goto label_140d221de_2
            
            if (rax_8 == 0xffffffff)
            label_140d221de_2:
                rdx_6 = nullptr
    
    void* rbx_1 = &rdx_6[1]
    
    if (rdx_6 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int64_t* rbx_2 = *(rbx_1 + 8)
        int64_t var_30 = *rbx_1
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (&var_30 != arg1)
            var_30.o = *arg1
            *arg1 = var_30.o
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                int64_t rdx_7 = *rbx_2
                (*rdx_7)(rbx_2, rdx_7)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    int64_t r8_3 = *rbx_2
                    (*(r8_3 + 8))(rbx_2, 1, r8_3)

LeaveCriticalSection(&data_143e1d620)
return arg1
