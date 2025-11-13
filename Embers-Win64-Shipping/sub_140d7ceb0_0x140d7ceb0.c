// 函数: sub_140d7ceb0
// 地址: 0x140d7ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int32_t rdi = arg2[1].d
int32_t rbx = rax - 1

if (rax == 0)
    rbx = 0

int32_t rax_2

if (rdi == 0)
    rax_2 = rdi + 2

if (rdi != 0 || rbx == 0xffffffff)
    rax_2 = 1

int64_t r14 = *arg2
int32_t rcx = rax_2 + rbx
int64_t var_58 = 0

if (rdi != 0 || rcx != 0)
    sub_1405a4c70(&var_58, rdi + rcx, 0)
    memcpy(var_58, r14, rdi * 2)
else
    int32_t var_4c_1 = 0

int32_t rcx_4 = sub_140a2cf70(&var_58, *arg3, rbx)
wchar16 const (* rdi_1)[0x5] = data_1439ae438
int64_t var_68 = 0
int64_t var_60 = 0
int64_t var_38
int32_t var_2c

if (rdi_1 == 0)
label_140d7d085:
    int64_t rbx_3 = var_58
    var_38 = 0
    sub_1405a4c70(&var_38, sbb.d(rcx_4, rcx_4, rdi != 0) + 5 + rdi, 0)
    memcpy(var_38, rbx_3, rdi * 2)
    sub_140a20ba0(&var_38, u".bmp", 4)
    int64_t rcx_17 = var_68
    *arg1 = var_38
    arg1[1].d = rdi
    *(arg1 + 0xc) = var_2c
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    wchar16 const (** r14_1)[0x5] = &data_1439ae438
    
    while (true)
        int32_t rbx_2
        int32_t rsi_2
        int64_t rdi_2
        
        if (*rdi_1 == 0)
            rbx_2 = rdi
            rdi_2 = 0
            int64_t rsi_3 = var_58
            var_38 = 0
            
            if (rbx_2 != 0)
                sub_1405a4c70(&var_38, rbx_2, 0)
                rdi_2 = var_38
                memcpy(rdi_2, rsi_3, rbx_2 * 2)
                rsi_2 = var_2c
            else
                rsi_2 = 0
        else
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while ((*rdi_1)[rbx_1] != 0)
            
            int32_t rax_3
            
            if (rdi == 0)
                rax_3 = rdi + 1
            
            if (rdi != 0 || rbx_1.d == 0)
                rax_3 = 0
            
            int64_t r15_1 = var_58
            int32_t rcx_5 = rax_3 + rbx_1.d
            int64_t var_48 = 0
            int32_t var_3c
            
            if (rdi != 0 || rcx_5 != 0)
                sub_1405a4c70(&var_48, rcx_5 + rdi, 0)
                memcpy(var_48, r15_1, rdi * 2)
            else
                var_3c = 0
            
            sub_140a20ba0(&var_48, rdi_1, rbx_1.d)
            rdi_2 = var_48
            rbx_2 = rdi
            rsi_2 = var_3c
            var_48 = 0
            int32_t var_40_1
            var_40_1.q = 0
        
        int64_t rcx_11 = var_68
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        var_68 = rdi_2
        var_38 = 0
        r14_1 = &r14_1[1]
        var_60.d = rbx_2
        var_60:4.d = rsi_2
        int32_t var_30
        var_30.q = 0
        char rax_4
        rax_4, rcx_4 = sub_140b16090(&var_68)
        
        if (rax_4 != 0)
            *arg1 = var_68
            arg1[1].d = var_60.d
            *(arg1 + 0xc) = var_60:4.d
            int64_t var_60_1 = 0
            var_68 = 0
            break
        
        rdi_1 = *r14_1
        
        if (rdi_1 == 0)
            goto label_140d7d085
int64_t rcx_18 = var_58

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

return arg1
