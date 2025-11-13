// 函数: sub_140af83b0
// 地址: 0x140af83b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0
int64_t var_38
sub_140a300d0(arg2, &var_38, &data_142d404d4, &data_142d40450, 1)
sub_140aefec0(arg1 + 0x210, &arg_8, &var_38)
int64_t rax_1 = sx.q(arg_8)
void* const rax_4

if (rax_1.d == 0xffffffff)
    rax_4 = nullptr
else
    rax_4 = rax_1 * 0x60 + *(arg1 + 0x210)

void* rsi = rax_4 + 0x10

if (rax_4 == 0)
    rsi = nullptr

int64_t* rbx_1

if (rsi == 0)
    rbx_1.b = rsi != 0
else
    uint64_t var_48
    int64_t var_28
    
    if (*(rsi + 0x38) == 0)
        rbx_1.b = 0
    else
        int32_t rbx_2 = (data_143de54f8).d
        int64_t rbp_1 = data_143de54f0
        var_48 = 0
        int32_t var_40_1 = rbx_2
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_48, rbx_2, 0)
            memcpy(var_48, rbp_1, rbx_2 * 2)
        else
            int32_t var_3c_1 = 0
        
        int64_t* rax_5 = sub_140a35790(&var_48, &var_28)
        rbx_1 = *(rsi + 0x30)
        void* rbp_4 = &rbx_1[sx.q(*(rsi + 0x38)) * 2]
        
        if (rbx_1 == rbp_4)
        label_140af84fc:
            rbx_1.b = 1
            rdi = 3
        else
            while (true)
                int16_t* rdx_5
                
                if (rax_5[1].d == 0)
                    rdx_5 = &data_142d40450
                else
                    rdx_5 = *rax_5
                
                int16_t* const rcx_5
                
                if (rbx_1[1].d == 0)
                    rcx_5 = &data_142d40450
                else
                    rcx_5 = *rbx_1
                
                if (sub_140a54510(rcx_5, rdx_5) == 0)
                    rdi = 3
                    break
                
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rbp_4)
                    goto label_140af84fc
            
            rbx_1.b = 0
    
    if ((rdi.b & 2) != 0)
        int64_t rcx_6 = var_28
        rdi &= 0xfffffffd
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    if ((rdi.b & 1) != 0)
        uint64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    
    if (rbx_1.b == 0)
        if (arg3 != 0)
            sub_140597df0(arg3, rsi + 0x20)
        
        if (arg4 != 0)
            *arg4 = *(rsi + 0x40)
        
        rbx_1.b = rsi != 0
    else
        rbx_1.b = 0

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return zx.q(rbx_1.b)
