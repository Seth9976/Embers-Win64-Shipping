// 函数: sub_140944100
// 地址: 0x140944100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x20)
*(arg1 + 0x28) = 0

if (rsi != 0)
    void arg_8
    int64_t* rax_2 = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x38))(rax_2, *(rsi + 0x10), r8_1)
    int64_t* rbx_1 = *(rsi + 0x30)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = *(rsi + 0x20)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rbx_3 = *(rsi + 8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp5_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    j_sub_140a74f90(rsi)
    *(arg1 + 0x20) = 0

sub_14093d4c0(arg1 + 0xb0)
sub_14093d4c0(arg1 + 0xc8)
sub_14093d4c0(arg1 + 0xe0)
bool cond:0 = *(arg1 + 0x4c) == 0
*(arg1 + 0x48) = 0

if (not(cond:0))
    sub_1405c5510(arg1 + 0x40, 0)

return sub_14093eda0(arg1 + 0x60, 0) __tailcall
