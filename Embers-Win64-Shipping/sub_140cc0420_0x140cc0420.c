// 函数: sub_140cc0420
// 地址: 0x140cc0420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[3].d)
int64_t rsi = arg2[2]
void* var_48 = *arg2
int64_t var_40 = arg2[1]
uint64_t var_38 = 0
int32_t i_2 = rdi.d

if (rdi.d != 0)
    sub_1405c4a00(&var_38, rdi.d, 0)
    memcpy(var_38, rsi, (rdi << 3).d)
else
    int32_t var_2c_1 = 0

int64_t* rbx
uint64_t r9_1

if (arg3 == 0)
    sub_140ccfa10()
    bool cond:0_1
    
    if (var_48 == 0)
        if (i_2 != 0)
            goto label_140cc056b
        
        cond:0_1 = var_48 == 0
    else if (sub_140d3e110(&var_40) != 0 || i_2 == 0)
        cond:0_1 = var_48 == 0
    else
    label_140cc056b:
        void* rax_7 = sub_140d3c6e0(&var_40)
        void* rcx_9 = rax_7
        
        if (rax_7 != 0)
            if (i_2 == 0)
                goto label_140cc05de
            
            goto label_140cc0599
        
        void* rax_8 = sub_140cd04d0(&var_48, nullptr, 0)
        rcx_9 = rax_8
        
        if (rax_8 == 0 || i_2 == 0)
        label_140cc05de:
            void* temp0_1 = var_48
            cond:0_1 = temp0_1 == 0
            
            if (temp0_1 != 0)
                var_40.d = 0xffffffff
                var_40:4.d = 0
                var_48 = nullptr
                cond:0_1 = var_48 == 0
        else
        label_140cc0599:
            rbx = zx.q(i_2 - 1)
            void* rax_11 = sub_140caa600(rcx_9, *(var_38 + (sx.q(rbx.d) << 3)))
            void* r9_2 = rax_11
            
            if (rax_11 == 0)
                goto label_140cc05de
            
            if (rbx.d s> 0)
                int64_t r8_6 = *rax_11
                r9_2 = (*(r8_6 + 0x48))(rax_11, var_38, r8_6)
            
            if (r9_2 == 0 || (data_1439a9d98 & *(*(r9_2 + 8) + 0x10)) == 0)
                goto label_140cc05de
            
            var_48 = r9_2
            cond:0_1 = var_48 == 0
    
    rbx.b = cond:0_1
    r9_1 = var_38
else
    int64_t rdi_1 = sx.q(arg3[3].d)
    int64_t var_28_1 = *arg3
    rbx = arg3[2]
    int64_t var_20 = arg3[1]
    uint64_t var_18 = 0
    int32_t var_10_1 = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a00(&var_18, rdi_1.d, 0)
        memcpy(var_18, rbx, (rdi_1 << 3).d)
    else
        int32_t var_c_1 = 0
    
    char rax_4 = sub_14077a170(&var_40, &var_20)
    r9_1 = var_38
    uint64_t r10_1 = var_18
    int32_t i_1
    
    if (rax_4 != 0)
        i_1 = i_2
    
    if (rax_4 == 0 || i_1 != var_10_1)
    label_140cc0526:
        rbx.b = 0
    else
        uint64_t rcx_5 = r10_1
        
        if (i_1 != 0)
            int32_t i
            
            do
                if (*(r9_1 - r10_1 + rcx_5) != *rcx_5)
                    goto label_140cc0526
                
                rcx_5 += 8
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        rbx.b = 1
    
    if (r10_1 != 0)
        sub_140a74f90(r10_1)
        r9_1 = var_38

if (r9_1 != 0)
    sub_140a74f90(r9_1)

return zx.q(rbx.b)
