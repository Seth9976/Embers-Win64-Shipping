// 函数: sub_1423f3920
// 地址: 0x1423f3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f08
int64_t rax_1 = __security_cookie ^ &var_f08
char rbx = 0
int32_t var_eb8 = 0
int64_t r12
r12.b = 0
int16_t* const r15 = &data_142d40450
int16_t* var_ed8 = nullptr
int64_t var_ed0 = 0
int16_t* var_ec8

if (arg1[1].d == 0)
label_1423f3d04:
    int32_t rcx_24
    rcx_24.b = sub_140b5b8a0(arg1[3].d, 0) == 0
    
    if ((*(arg1 + 0x1c) != 0 | rcx_24.b) == 0)
    label_1423f3de4:
        
        if (var_ed8 != u"NotBound!")
            int32_t rcx_34 = var_ed0:4.d
            
            if (rcx_34 != 0xa)
                sub_1405947f0(&var_ed8, 0xa)
                rcx_34 = var_ed0:4.d
            
            int32_t rax_27 = var_ed0.d + 0xa
            var_ed0.d = rax_27
            
            if (rax_27 s> rcx_34)
                sub_140594770(&var_ed8)
            
            __builtin_memcpy(var_ed8, u"NotBound!", 0x14)
    else
        void* rax_20 = sub_140d3c6e0(&arg1[2])
        
        if (rax_20 == 0)
            goto label_1423f3de4
        
        if (sub_140d1fd20(rax_20, arg1[3]) == 0)
            goto label_1423f3de4
        
        void* rax_22 = sub_140d3c6e0(&arg1[2])
        var_eb8.q = arg1[3]
        int64_t* rax_23 = sub_140b63b70(&var_eb8, &var_ec8)
        
        if (&var_ed8 != rax_23)
            int16_t* rcx_30 = var_ed8
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            var_ed8 = *rax_23
            *rax_23 = 0
            var_ed0.d = rax_23[1].d
            var_ed0:4.d = *(rax_23 + 0xc)
            rax_23[1] = 0
        
        int16_t* rcx_32 = var_ec8
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        r12.b = 1
        
        if (rax_22 != 0)
            int64_t* rax_26 = sub_140d21e10(rax_22, &var_ec8, 0)
            
            if (rax_26[1].d == 0)
                rbx = 1
            else
                *rax_26
                rbx = 1
else
    int64_t* rcx = *arg1
    
    if (rcx == 0)
        goto label_1423f3d04
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_1423f3d04
    
    var_eb8.q = 0
    
    if (arg1[1].d == 0)
    label_1423f3c35:
        
        if (var_ed8 != u" 0x0")
            bool cond:0_1 = var_ed0:4.d == 5
            int32_t rdx_10 = 0
            var_ed0.d = 0
            
            if (not(cond:0_1))
                sub_1405947f0(&var_ed8, 5)
                rdx_10 = var_ed0.d
            
            var_ed0.d = rdx_10 + 5
            
            if (rdx_10 + 5 s> var_ed0:4.d)
                sub_140594770(&var_ed8)
            
            int16_t* rcx_19 = var_ed8
            *rcx_19 = 0x30007800300020
            rcx_19[4] = 0
    else
        int64_t* rcx_1 = *arg1
        int32_t var_ec0
        
        if (rcx_1 != 0)
            int64_t* rax_5 = (*(*rcx_1 + 8))(rcx_1)
            
            if (rax_5 != 0)
                sub_140a2e390(&var_ec8, u"vtbl: %p", *rax_5)
                int16_t* rcx_3 = var_ed8
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                var_ed8 = var_ec8
                var_ed0.d = var_ec0
                int32_t var_ebc
                var_ed0:4.d = var_ebc
        
        if (arg1[1].d == 0)
            goto label_1423f3c35
        
        int64_t* rcx_4 = *arg1
        
        if (rcx_4 == 0)
            goto label_1423f3c35
        
        uint64_t rax_10 = (*(*rcx_4 + 0x10))(rcx_4)
        
        if (rax_10 == 0)
            goto label_1423f3c35
        
        sub_140a2e390(&var_ec8, u" func: 0x%llx", rax_10)
        int32_t r8_4
        
        if (var_ec0 == 0)
            r8_4 = 0
        else
            r8_4 = var_ec0 - 1
        
        sub_140a20ba0(&var_ed8, var_ec8, r8_4)
        int16_t* rcx_7 = var_ec8
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if (data_143a30278 != 0)
            char var_ea8[0xa0]
            sub_140a3bea0(&var_ea8)
            char var_aa8[0x400]
            var_aa8[0] = 0
            char var_6a8[0x400]
            var_6a8[0] = 0
            int16_t var_2a8_1 = 0
            sub_140b71650(rax_10, &var_ea8)
            int64_t rdi_2 = -1
            void* var_68_1 = nullptr
            int64_t rax_11 = -1
            void* rdx_2 = nullptr
            
            do
                rax_11 += 1
            while (var_6a8[rax_11] != 0)
            
            int32_t rsi_1 = (rax_11 + 1).d
            int32_t var_58_1 = rax_11.d
            
            if (rsi_1 u> 0x80 && rsi_1 != 0)
                void* rax_12 = sub_140a84c80(0, sx.q(rsi_1) * 2, 0)
                rdx_2 = rax_12
                var_68_1 = rax_12
            
            void var_168
            void* rcx_10 = &var_168
            
            if (rdx_2 != 0)
                rcx_10 = rdx_2
            
            sub_1405a7220(rcx_10, rsi_1, &var_6a8, rsi_1, 0x3f)
            void* rax_13 = nullptr
            void* var_188_1 = nullptr
            
            do
                rdi_2 += 1
            while (var_aa8[rdi_2] != 0)
            
            int32_t var_178_1 = rdi_2.d
            
            if (rdi_2.d + 1 u> 0x80 && rdi_2.d != 0xffffffff)
                rax_13 = sub_140a84c80(0, sx.q(rdi_2.d + 1) * 2, 0)
                var_188_1 = rax_13
            
            void var_288
            void* rcx_11 = &var_288
            
            if (rax_13 != 0)
                rcx_11 = rax_13
            
            sub_1405a7220(rcx_11, rdi_2.d + 1, &var_aa8, rdi_2.d + 1, 0x3f)
            int16_t var_ee8 = var_2a8_1
            sub_140a2e390(&var_ec8, u" %s [%s:%d]", rcx_11)
            int32_t r8_9
            
            if (var_ec0 == 0)
                r8_9 = 0
            else
                r8_9 = var_ec0 - 1
            
            sub_140a20ba0(&var_ed8, var_ec8, r8_9)
            int16_t* rcx_14 = var_ec8
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            if (var_188_1 != 0)
                sub_140a74f90(var_188_1)
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)

wchar16 const* const r8_10 = u"DELEGATE"

if (var_ed0.d != 0)
    r15 = var_ed8

int16_t* const var_ee8_1 = r15

if (r12.b != 0)
    r8_10 = u"DYN DELEGATE"

sub_140a2e390(arg2, u"%s,%s,%s", r8_10)

if ((rbx & 1) != 0)
    int16_t* rcx_39 = var_ec8
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)

int16_t* rcx_40 = var_ed8

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

__security_check_cookie(rax_1 ^ &var_f08)
return arg2
