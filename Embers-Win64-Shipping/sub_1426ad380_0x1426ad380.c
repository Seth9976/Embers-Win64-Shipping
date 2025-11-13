// 函数: sub_1426ad380
// 地址: 0x1426ad380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* rdx = *(arg1 + 0xc0)
int32_t arg_8 = 0
int32_t r15 = 0
void* const rdx_1

if (rdx == 0 || arg3 == 0xff)
    rdx_1 = nullptr
else
    char rax_1 = *(rdx + 0x4c)
    
    if (arg3 u< rax_1)
        void* rcx_3 = *(rdx + 0x30)
        
        if (rcx_3 == 0)
            rdx_1 = nullptr
        else
            rdx_1 = sub_1426b21a0(rcx_3, arg3)
    else
        rdx_1 = *(rdx + 0x38) + (zx.q(arg3) - zx.q(rax_1)) * 0x18

arg_8.q = rdx_1

if (rdx_1 == 0)
    return arg2

int32_t* r9_1

if (*(arg1 + 0xd0) == 0 || zx.d(arg3) s>= *(arg1 + 0xe0))
    r9_1 = nullptr
else
    r9_1 = zx.q(*(*(arg1 + 0xd8) + (zx.q(arg3) << 1))) + *(arg1 + 0xc8)

int64_t* rcx_6 = *(rdx_1 + 8)
int16_t* var_58
int16_t* rcx_7
int16_t* const rsi_1

if (rcx_6 == 0 || r9_1 == 0)
    rcx_7 = var_58
    rsi_1 = u"empty"
else
    if ((*(rcx_6 + 0x2b) & 2) != 0)
        int64_t rax_7 = sx.q(*r9_1)
        
        if (rax_7.d s< 0 || rax_7.d s>= *(arg1 + 0xf0))
            rcx_6 = nullptr
        else
            rcx_6 = *(*(arg1 + 0xe8) + (rax_7 << 3))
        
        r9_1 = &r9_1[1]
    
    (*(*rcx_6 + 0x2e0))(rcx_6, &var_58, arg1, r9_1)
    rsi_1 = &data_142d40450
    rcx_7 = var_58
    r15 = 1
    int32_t var_50
    
    if (var_50 != 0)
        rsi_1 = rcx_7

int16_t* var_88 = nullptr
int32_t rax_10 = 0
int32_t var_80_1 = 0
int16_t* rdi_1 = nullptr
int32_t var_7c_1 = 0
int32_t r12_1 = 0
int64_t r14_1 = -1

if (rsi_1 != 0 && *rsi_1 != 0)
    int64_t rdi_2 = -1
    
    do
        rdi_2 += 1
    while (rsi_1[rdi_2] != 0)
    
    if (rdi_2.d + 1 s> 0)
        sub_1405947f0(&var_88, rdi_2.d + 1)
        rax_10 = var_7c_1
        r12_1 = var_80_1
    
    r12_1 += rdi_2.d + 1
    var_80_1 = r12_1
    
    if (r12_1 s> rax_10)
        sub_140594770(&var_88)
        r12_1 = var_80_1
    
    rdi_1 = var_88
    UnDecorator::getReferenceType(rdi_1, rsi_1, (rdi_2.d + 1) * 2)
    rcx_7 = var_58

if ((r15.b & 1) != 0)
    r15 &= 0xfffffffe
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int16_t* r12_2

if (arg4 == 0)
    if (arg2 != &var_88)
        int32_t r8_3 = *(arg2 + 0xc)
        arg2[1].d = r12_1
        
        if (r12_1 != 0 || r8_3 != 0)
            sub_1405a4c70(arg2, r12_1, r8_3)
            memcpy(*arg2, rdi_1, r12_1 * 2)
        else
            *(arg2 + 0xc) = 0
    
    r12_2 = var_88
else
    uint64_t var_78
    int32_t var_70
    int32_t var_6c
    uint64_t var_48
    
    if (arg4 != 1)
        int64_t arg_10 = *(sub_14272ef20() + 0x18)
        sub_140b63b70(&arg_10, &var_78)
        int32_t rdi_5 = var_70 - 1
        
        if (var_70 s<= 0)
            rdi_5 = 0
        
        int32_t rax_17
        rax_17.b = var_70 s<= 0
        int32_t rax_19 = rax_17 + 1 + var_70
        
        if (rax_19 s> var_6c)
            sub_140594770(&var_78)
        
        int64_t rcx_22 = sx.q(rdi_5)
        *(var_78 + (rcx_22 << 1)) = 0x5f
        *(var_78 + (rcx_22 << 1) + 2) = 0
        uint64_t rdi_6 = var_78
        var_58 = nullptr
        
        if (rax_19 != 0)
            sub_1405a4c70(&var_58, rax_19, 0)
            memcpy(var_58, rdi_6, rax_19 * 2)
            rdi_6 = var_78
        else
            int32_t var_4c_1 = 0
        
        if (rdi_6 != 0)
            sub_140a74f90(rdi_6)
        
        void* rax_23 = *(arg_8.q + 8)
        uint64_t* rcx_29
        int32_t r15_1
        
        if (rax_23 == 0)
            r15_1 = r15 | 4
            var_48 = 0
            int32_t var_40 = 0
            rcx_29 = &var_48
        else
            void* rax_24 = *(rax_23 + 0x10)
            r15_1 = r15 | 2
            
            if (rax_24 != 0)
                arg_10 = *(rax_24 + 0x18)
                sub_140b63b70(&arg_10, &var_78)
                rcx_29 = &var_78
            else
                var_78 = 0
                int32_t var_70_1
                var_70_1.q = rax_24
                sub_1405947f0(&var_78, (rax_24 + 5).d)
                int32_t var_70_2 = var_70_1 + 5
                
                if (var_70_1 + 5 s> var_6c)
                    sub_140594770(&var_78)
                
                UnDecorator::getReferenceType(var_78, u"None", 0xa)
                rcx_29 = &var_78
        
        uint64_t rax_27 = *rcx_29
        *rcx_29 = 0
        uint64_t var_68 = rax_27
        int32_t rax_28 = rcx_29[1].d
        int32_t var_5c_1 = *(rcx_29 + 0xc)
        rcx_29[1] = 0
        
        if ((r15_1.b & 4) != 0)
            uint64_t rcx_31 = var_48
            r15_1 &= 0xfffffffb
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
        
        if ((r15_1.b & 2) != 0)
            uint64_t rcx_32 = var_78
            r15_1 &= 0xfffffffd
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
        
        int32_t var_70_3
        uint64_t rsi_4
        int32_t rdi_8
        uint64_t r12_3
        
        if (sub_140a32a50(&var_68, &var_58, 1) == 0)
            rsi_4 = 0
            uint64_t r14_3 = var_68
            var_78 = 0
            var_70_3 = rax_28
            
            if (rax_28 != 0)
                sub_1405a4c70(&var_78, rax_28, 0)
                rsi_4 = var_78
                memcpy(rsi_4, r14_3, rax_28 * 2)
            else
                var_6c = 0
            
            r12_3 = var_78
            rdi_8 = 0x10
        else
            int32_t rdx_18 = rax_19 - 1
            
            if (rax_19 == 0)
                rdx_18 = 0
            
            int32_t rcx_35
            uint64_t r8_9
            
            if (rax_28 == 0)
                rcx_35 = 0
                r8_9 = &data_142d40450
            else
                r8_9 = var_68
                rcx_35 = rax_28 - 1
            
            int32_t rax_33 = rcx_35 - rdx_18
            int32_t rdx_19
            
            if (rcx_35 - rdx_18 s>= 0)
                rdx_19 = rcx_35
                
                if (rax_33 s< rcx_35)
                    rdx_19 = rax_33
            else
                rdx_19 = 0
            
            r12_3 = 0
            int32_t rdx_20 = 0
            var_78 = 0
            var_70_3 = 0
            int64_t rdi_7 = r8_9 + ((sx.q(rcx_35) - sx.q(rdx_19)) << 1)
            int32_t rcx_38 = 0
            var_6c = 0
            
            if (rdi_7 != 0 && *rdi_7 != 0)
                do
                    r14_1 += 1
                while (*(rdi_7 + (r14_1 << 1)) != 0)
                
                if (r14_1.d + 1 s> 0)
                    sub_1405947f0(&var_78, r14_1.d + 1)
                    rcx_38 = var_6c
                    rdx_20 = var_70_3
                    r12_3 = var_78
                
                int32_t rax_35 = r14_1.d + 1 + rdx_20
                var_70_3 = rax_35
                
                if (rax_35 s> rcx_38)
                    sub_140594770(&var_78)
                    r12_3 = var_78
                
                UnDecorator::getReferenceType(r12_3, rdi_7, (r14_1.d + 1) * 2)
            
            rsi_4 = var_78
            rdi_8 = 8
        
        int32_t rdi_10 = rdi_8 | r15_1
        uint64_t r14_4 = 0
        var_48 = 0
        
        if (var_70_3 != 0)
            sub_1405a4c70(&var_48, var_70_3, 0)
            r14_4 = var_48
            memcpy(r14_4, var_78, var_70_3 * 2)
        
        if ((rdi_10.b & 0x10) != 0)
            rdi_10 &= 0xffffffef
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
        
        if ((rdi_10.b & 8) != 0 && r12_3 != 0)
            sub_140a74f90(r12_3)
        
        int16_t* const r13_1 = &data_142d40450
        r12_2 = var_88
        int16_t* rdi_11 = &data_142d40450
        
        if (var_80_1 != 0)
            rdi_11 = r12_2
        
        int64_t* rax_36 = sub_140b63b70(arg_8.q, &var_48)
        
        if (rax_36[1].d != 0)
            r13_1 = *rax_36
        
        int16_t* var_98_1 = rdi_11
        sub_140a2e390(&var_78, u"%s [%s]: %s", r13_1)
        
        if (arg2 == &var_78)
            uint64_t rcx_51 = var_78
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
        else
            int64_t rcx_50 = *arg2
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            *arg2 = var_78
            arg2[1].d = var_70_3
            *(arg2 + 0xc) = var_6c
            var_70_3.q = 0
            var_78 = 0
        
        uint64_t rcx_52 = var_48
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
        
        uint64_t rcx_54 = var_68
        
        if (rcx_54 != 0)
            sub_140a74f90(rcx_54)
        
        int16_t* rcx_55 = var_58
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
    else
        int16_t* const rsi_2 = &data_142d40450
        r12_2 = var_88
        int64_t* rax_12 = sub_140b63b70(arg_8.q, &var_48)
        
        if (rax_12[1].d != 0)
            rsi_2 = *rax_12
        
        sub_140a2e390(&var_78, u"%s: %s", rsi_2)
        
        if (arg2 == &var_78)
            uint64_t rcx_17 = var_78
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
        else
            int64_t rcx_16 = *arg2
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            *arg2 = var_78
            arg2[1].d = var_70
            *(arg2 + 0xc) = var_6c
            var_70.q = 0
            var_78 = 0
        
        uint64_t rcx_18 = var_48
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)

if (r12_2 != 0)
    sub_140a74f90(r12_2)

return arg2
