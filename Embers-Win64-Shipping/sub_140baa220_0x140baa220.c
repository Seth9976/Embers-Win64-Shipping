// 函数: sub_140baa220
// 地址: 0x140baa220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int32_t rsi = 1
void arg_18
int64_t rcx_1 = *sub_140b58260(&arg_18, rdx, 1)
sub_140ba93d0()
int64_t* rcx_2 = data_143e1a620

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2, &arg_8, rcx_1)
else
    if (data_143e1a5e0 != 0)
        void* rax_1 = data_143e1a5f0
        void* rcx_3 = &data_143e1a600
        
        if (rax_1 != 0)
            rcx_3 = rax_1
        
        data_143e1a5e0((*(*rcx_3 + 8))(rcx_3), &data_143e1a5e0)
        rcx_2 = data_143e1a620
    
    if (data_143e1a5e0 == 0 || rcx_2 == 0)
        char* rax_5 = sub_140a752e0()
        int64_t* rbx_1 = *(rax_5 + 0x30)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t* rax_6 = sub_140903440(*(rax_5 + 0x28))
        int64_t var_68 = 0
        int32_t r14_1 = rax_6[1].d
        int64_t r12_1 = *rax_6
        int32_t var_60_1 = r14_1
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_68, r14_1, 0)
            memcpy(var_68, r12_1, r14_1 * 2)
        else
            int32_t var_5c_1 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t r14_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (r14_2 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        sub_140ba7460(&data_143e1a5e0, &arg_8, rcx_1, &var_68)
        int64_t rcx_10 = var_68
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    else
        (*(*rcx_2 + 0x10))(rcx_2, &arg_8, rcx_1)

uint64_t var_58
int64_t var_48
uint64_t* rax_10

if (arg_8.q != 0)
    rax_10 = sub_140b63b70(&arg_8, &var_48)
    rsi = 2
else
    int32_t rbx_2 = arg2[1].d
    int64_t r14_3 = *arg2
    var_58 = 0
    int32_t var_50_1 = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_58, rbx_2, 0)
        memcpy(var_58, r14_3, rbx_2 * 2)
        rax_10 = &var_58
    else
        int32_t var_4c_1 = 0
        rax_10 = &var_58

*arg1 = 0
*arg1 = *rax_10
*rax_10 = 0
arg1[1].d = rax_10[1].d
*(arg1 + 0xc) = *(rax_10 + 0xc)
rax_10[1] = 0

if ((rsi.b & 2) != 0)
    int64_t rcx_17 = var_48
    rsi &= 0xfffffffd
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

if ((rsi.b & 1) != 0)
    uint64_t rcx_18 = var_58
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

return arg1
