// 函数: sub_140fde290
// 地址: 0x140fde290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x18)
int32_t var_38
(*(*rcx + 0x40))(rcx, &var_38)
int32_t rdx_1 = var_38
int32_t rbx = 0

if (rdx_1 - 3 u<= 0x3d)
    switch (rdx_1)
        case 3, 7, 0xc, 0x11, 0x14, 0x16, 0x19, 0x1e, 0x24, 0x2a, 0x2d, 0x2f, 0x32, 0x39, 0x3e
            rbx = 2
        case 4, 8, 0xe, 0x12, 0x20, 0x26, 0x2b, 0x34, 0x3b, 0x40
            rbx = 1

int32_t result_1
uint64_t result = zx.q(result_1)
int64_t (* var_68)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
int64_t r8

if (result.d != 1)
    int64_t (* var_48)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4)
    char var_30
    
    if (result.d == 4)
        void* rax_7 = *(arg2 + 0x20)
        int64_t* rcx_12 = rax_7 - 0x68
        
        if (rax_7 == 0)
            rcx_12 = nullptr
        
        result = (*(*rcx_12 + 0x30))(rcx_12, &var_68)
        int32_t r8_5 = var_68.d s>> var_30
        int32_t r9_3 = var_68:4.d s>> var_30
        
        if (rbx == 0)
            var_48 = arg1
            int64_t (** var_50_6)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_48
            int64_t (* var_40_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
            var_58 = sub_140fdd510
            int64_t (** var_78_6)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
            int64_t var_80_6 = r8
            return sub_140fceac0(arg1, arg2, r8_5, r9_3, 1)
        
        if (rbx == 1)
            var_48 = arg1
            int64_t (** var_50_5)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_48
            int64_t (* var_40_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
            var_58 = sub_140fdd510
            int64_t (** var_78_5)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
            int64_t var_80_5 = r8
            return sub_140fce620(arg1, arg2, r8_5, r9_3, 1)
        
        if (rbx == 2)
            var_58 = arg1
            int64_t (** var_40_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
            int64_t (* var_50_4)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
            var_48 = sub_140fdd510
            int64_t (** var_78_4)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_48
            int64_t var_80_4 = r8
            return sub_140fce870(arg1, arg2, r8_5, r9_3, rbx - 1)
    else
        int32_t var_28
        
        if (result.d == 5)
            void* rcx_17 = *(arg2 + 0x20)
            int32_t* rax_9 = rcx_17 - 0x10
            
            if (rcx_17 == 0)
                rax_9 = 0x60
            
            result = rcx_17 - 0xc
            
            if (rcx_17 == 0)
                result = 0x64
            
            int32_t r8_7 = *rax_9 s>> var_30
            int32_t r9_5 = *result s>> var_30
            
            if (rbx == 0)
                var_48 = arg1
                int64_t (** var_50_9)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_6)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_9)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_9 = r8
                return sub_140fcf1b0(arg1, arg2, r8_7, r9_5, var_28)
            
            if (rbx == 1)
                var_48 = arg1
                int64_t (** var_50_8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_5)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_8 = r8
                return sub_140fced10(arg1, arg2, r8_7, r9_5, var_28)
            
            if (rbx == 2)
                var_48 = arg1
                int64_t (** var_50_7)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_4)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_7)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_7 = r8
                return sub_140fcef60(arg1, arg2, r8_7, r9_5, var_28)
        else if (result.d == 8)
            void* rcx_22 = *(arg2 + 0x20)
            int32_t* rax_13 = rcx_22 - 0x10
            
            if (rcx_22 == 0)
                rax_13 = 0x60
            
            result = rcx_22 - 0xc
            
            if (rcx_22 == 0)
                result = 0x64
            
            int32_t r8_9 = *rax_13 s>> var_30
            int32_t r9_7 = *result s>> var_30
            
            if (rbx == 0)
                var_48 = arg1
                int64_t (** var_50_12)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_9)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_12)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_12 = r8
                return sub_140fcf8c0(arg1, arg2, r8_9, r9_7, var_28)
            
            if (rbx == 1)
                var_48 = arg1
                int64_t (** var_50_11)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_8)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_11)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_11 = r8
                return sub_140fcf400(arg1, arg2, r8_9, r9_7, var_28)
            
            if (rbx == 2)
                var_48 = arg1
                int64_t (** var_50_10)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_48
                int64_t (* var_40_7)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
                var_58 = sub_140fdd510
                int64_t (** var_78_10)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) =
                    &var_58
                int64_t var_80_10 = r8
                return sub_140fcf660(arg1, arg2, r8_9, r9_7, var_28)
else if (rdx_1 != 0)
    int32_t var_2c
    
    if (rbx == 0)
        int64_t (** var_60_4)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
        var_58 = arg1
        var_68 = sub_140fdd510
        int64_t (* var_50_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
        void** var_78_3 = &var_68
        int64_t var_80_3 = r8
        return sub_140fcffc0(arg1, arg2, var_2c, 1, 1)
    
    if (rbx == 1)
        int64_t (** var_60_3)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
        var_58 = arg1
        var_68 = sub_140fdd510
        int64_t (* var_50_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
        void** var_78_2 = &var_68
        int64_t var_80_2 = r8
        return sub_140fcfb20(arg1, arg2, var_2c, 1, 1)
    
    if (rbx == 2)
        void** var_50_1 = &var_68
        var_68 = arg1
        var_58 = sub_140fdd510
        int64_t (* var_60_2)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = arg2
        int64_t (** var_78_1)(int64_t* arg1, int64_t* arg2, int16_t* arg3, char* arg4) = &var_58
        int64_t var_80_1 = r8
        return sub_140fcfd70(arg1, arg2, var_2c, rbx - 1, rbx - 1)
else
    int64_t rcx_4 = *(arg1 + 0x30) + 7
    var_68 = arg2
    void*** rcx_5 = rcx_4 & 0xfffffffffffffff8
    int64_t var_60_1 = r8
    void* rax_4 = &rcx_5[4]
    
    if (rax_4 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x28)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_5[4]
    
    *(arg1 + 0x30) = rax_4
    int64_t* rax_5 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    int128_t zmm0 = var_68.o
    *rax_5 = rcx_5
    *(arg1 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    result = &data_142efae98
    *rcx_5 = &data_142efae98
    *(rcx_5 + 0x10) = zmm0
return result
