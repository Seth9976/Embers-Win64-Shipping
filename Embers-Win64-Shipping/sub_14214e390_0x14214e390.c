// 函数: sub_14214e390
// 地址: 0x14214e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_88 = nullptr
int32_t var_80 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int16_t* var_78 = nullptr
int32_t var_70 = 0
sub_1405947f0(&var_78, 2)
int32_t rax = var_70 + 2
var_70 = rax

if (rax s> 0)
    sub_140594770(&var_78)

int16_t* rbx = var_78
UnDecorator::getReferenceType(rbx, &data_142d404c4, 4)
int32_t var_98 = 1
char rax_1 = sub_14060a620(arg5, &var_78, &var_88, &var_68, 1, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

int16_t* r12 = var_88
uint64_t result
int16_t* rcx_14
uint64_t var_58
void* const var_48
void* const var_40

if (rax_1 == 0)
    int16_t* rsi_4
    
    if (arg5[1].d == 0)
        rsi_4 = &data_142d40450
    else
        rsi_4 = *arg5
    
    sub_140b58260(&var_78, rsi_4, 0)
    uint64_t rax_7 = sub_140bd3220(arg4, var_78)
    
    if (rax_7 == 0)
        var_58 = rax_7
        int32_t var_50_2 = rax_7.d
        result = sub_140cd84a0(arg2, &var_58, 0)
        int32_t rdi_4 = 0
        
        if (var_50_2 s> 0)
            int64_t rsi_5 = 0
            
            do
                int32_t rbx_5 = arg5[1].d
                uint64_t rax_8 = var_58
                int64_t r12_1 = *arg5
                var_48 = nullptr
                var_40.d = rbx_5
                void* r14_4 = *(rsi_5 + rax_8)
                
                if (rbx_5 != 0)
                    sub_1405a4c70(&var_48, rbx_5, 0)
                    memcpy(var_48, r12_1, rbx_5 * 2)
                else
                    var_40:4.d = 0
                
                var_98.q = &var_48
                result = sub_14214e390(arg1, r14_4, r14_4, *(r14_4 + 0x10), var_98)
                
                if (arg1[1] != 0)
                    uint64_t rcx_30 = var_58
                    
                    if (rcx_30 != 0)
                        result = sub_140a74f90(rcx_30)
                    
                    int64_t rcx_31 = var_68
                    
                    if (rcx_31 != 0)
                        result = sub_140a74f90(rcx_31)
                    
                    rcx_14 = var_88
                    
                    if (rcx_14 == 0)
                        goto label_14214e5b8
                    
                    goto label_14214e5b3
                
                rdi_4 += 1
                rsi_5 += 8
            while (rdi_4 s< var_50_2)
            
            r12 = var_88
        
        goto label_14214e58f
    
    arg1[1] = rax_7
    result = arg2
    arg1[2] = result
    *arg1 = arg3
label_14214e59d:
    int64_t rcx_19 = var_68
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
else
    int16_t* const rsi_1 = &data_142d40450
    int16_t* rdx_2 = &data_142d40450
    
    if (var_80 != 0)
        rdx_2 = r12
    
    sub_140b58260(&var_78, rdx_2, 0)
    int16_t* rbx_1 = var_78
    
    if (rbx_1 == 0)
    label_14214e4fb:
        
        if (var_80 != 0)
            rsi_1 = r12
        
        sub_140b58260(&var_78, rsi_1, 1)
        var_58 = 0
        int32_t var_50_1 = 0
        result = sub_140cd84a0(arg2, &var_58, 0)
        int32_t rbx_2 = 0
        
        if (var_50_1 s<= 0)
        label_14214e58f:
            uint64_t rcx_13 = var_58
            
            if (rcx_13 != 0)
                result = sub_140a74f90(rcx_13)
            
            goto label_14214e59d
        
        int64_t* rdi_2 = nullptr
        void* rsi_2
        
        while (true)
            rsi_2 = *(rdi_2 + var_58)
            sub_140cba490(&var_88, &var_78, *(rsi_2 + 0x10))
            int32_t rcx_11
            rcx_11.b = sub_140b5b8a0(var_88.d, 0).b == 0
            result.b = var_88:4.d != 0
            result.b |= rcx_11.b
            int16_t* rcx_12 = var_78
            
            if (result.b != 0)
                rcx_12 = var_88
            
            if (*(rsi_2 + 0x18) == rcx_12)
                break
            
            rbx_2 += 1
            rdi_2 = &rdi_2[1]
            
            if (rbx_2 s>= var_50_1)
                goto label_14214e58f
        
        int64_t rdi_3 = var_68
        var_48 = nullptr
        var_40.d = var_60
        
        if (var_60 != 0)
            sub_1405a4c70(&var_48, var_60, 0)
            memcpy(var_48, rdi_3, var_60 * 2)
        else
            var_40:4.d = 0
        
        var_98.q = &var_48
        result = sub_14214e390(arg1, rsi_2, rsi_2, *(rsi_2 + 0x10), var_98)
        uint64_t rcx_23 = var_58
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        if (rdi_3 != 0)
            result = sub_140a74f90(rdi_3)
    else
        var_48 = arg4
        void* const rax_2
        
        if (arg4 == 0)
            rax_2 = nullptr
        else
            rax_2 = *(arg4 + 0x50)
        
        int32_t var_38_1 = 0xffffffff
        int16_t var_34_1 = 0x101
        char var_32_1 = 0
        sub_140be1ff0(&var_48)
        void* const rdi_1 = rax_2
        
        if (rdi_1 == 0)
            goto label_14214e4fb
        
        while (true)
            int16_t* rax_3
            
            if (rdi_1 == 0)
                var_88 = nullptr
                rax_3 = nullptr
            else
                rax_3 = *(rdi_1 + 0x28)
                var_88 = rax_3
            
            if (rax_3 == rbx_1)
                break
            
            void* rax_4 = *(rdi_1 + 0x20)
            sub_140be1ff0(&var_48)
            rdi_1 = rax_4
            
            if (rdi_1 == 0)
                goto label_14214e4fb
        
        if (rdi_1 == 0)
            goto label_14214e4fb
        
        uint64_t rax_6 = arg2
        int64_t rsi_3 = var_68
        int64_t r14_3 = sx.q(*(rdi_1 + 0x4c)) + rax_6
        var_58 = 0
        int64_t var_50
        var_50.d = var_60
        
        if (var_60 != 0)
            sub_1405a4c70(&var_58, var_60, 0)
            memcpy(var_58, rsi_3, var_60 * 2)
            rax_6 = arg2
        else
            var_50:4.d = 0
        
        var_98.q = &var_58
        result = sub_14214e390(arg1, rax_6, r14_3, *(rdi_1 + 0x78), var_98)
        
        if (rsi_3 != 0)
            result = sub_140a74f90(rsi_3)

if (r12 != 0)
    rcx_14 = r12
label_14214e5b3:
    result = sub_140a74f90(rcx_14)

label_14214e5b8:
int64_t rcx_15 = *arg5

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
