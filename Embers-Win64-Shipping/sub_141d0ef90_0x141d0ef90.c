// 函数: sub_141d0ef90
// 地址: 0x141d0ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_18 = arg3
uint64_t rdi = zx.q(arg1[9].d)
int32_t arg_20 = rdi.d
int64_t i = arg4
int32_t r12 = (divs.dp.q(sx.o(arg2), sx.q(rdi.d))).d
int64_t r15 = mods.dp.q(sx.o(arg2), rdi)
void** const var_168 = &data_14321ded0
int128_t* var_160
memset(&var_160, 0, 0x50)
void** var_144 = nullptr
int64_t var_120_1
__builtin_memset(&var_120_1, 0, 0x14)
char arg_10 = 0
char* var_c0 = &arg_10
void*** (* var_c8)() = j_sub_141cf98c0
int128_t var_108 = zx.o(0)
void* rax_5 = sub_140a756e0(&var_c8, &data_143a21154)
char arg_8 = 0
void** rbx_1 = *(*(*arg1 + 0xe0) + (zx.q(*(arg1 + 0x4c)) << 3))
uint128_t zmm0 = zx.o(sub_140aecee0(rbx_1, rdi.d, 0, 0))
int64_t rax_7 = *(rax_5 + 0x10)
zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 1.10000002f
int64_t rdi_3 = (int.q(zmm0.d) + 0xf) & 0xfffffffffffffff0
sub_141d012b0(rax_5, sx.q(arg_20), rdi_3 * 2)
int64_t rax_8 = *(rax_5 + 0x28)
void* rcx_7 = &arg1[0x10]
int64_t var_b8 = rax_8
int64_t var_b0 = rax_8 + rdi_3
void* rax_10 = arg1[0xe]

if (rax_10 != 0)
    rcx_7 = rax_10

int64_t* rax_13 = arg1[0xc]((*(*rcx_7 + 8))(rcx_7))
int64_t* r9 = rax_13
int64_t* rcx_40

if (i s<= 0)
    rcx_40 = var_108.q
else
    void* rdx_6 = &arg1[7]
    int32_t var_158
    char* var_150
    int32_t var_148
    int128_t* var_138
    int64_t var_130
    uint32_t count
    int32_t var_110_1
    char rax_23
    
    do
        void* rcx_10 = *rdx_6
        
        if ((rcx_10.b & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + rdx_6
        
        int64_t i_1 = i
        uint64_t r13_1 = zx.q(arg1[9].d)
        int64_t rax_15 = sx.q(r12) * 2
        int64_t r8_1 = *(rcx_10 + (rax_15 << 3))
        int64_t rdx_8 = *(rcx_10 + (rax_15 << 3) + 8) - r8_1
        int32_t var_e8_1 = rdx_8.d
        uint64_t rax_17 = arg1[3] - zx.q(r12 * arg_20)
        int64_t rcx_13 = sx.q(arg_20)
        
        if (rax_17 s<= r13_1)
            r13_1 = rax_17
        
        int64_t i_2 = r13_1 - r15
        
        if (i_2 s<= i)
            i_1 = i_2
        
        if (rax_7 s< rcx_13 || arg_8 != 0 || *(rax_5 + 0x30) != arg1 || *(rax_5 + 0x38) != r12
                || (r15 == 0 && i s>= rcx_13))
            int64_t rcx_15
            
            if (*(*arg1 + 0xa4) s< 5)
                rcx_15 = 0
            else
                rcx_15 = arg1[1]
            
            (*(*r9 + 0x178))(r9, rcx_15 + r8_1)
            char* rcx_17 = (&var_b8)[zx.q(r12) & 1]
            (*(*rax_13 + 0x150))(rax_13, rcx_17, (rdx_8 + 0xf) & 0xfffffffffffffff0)
            
            if (arg_8 != 0)
                int64_t* rcx_19 = var_108:8.q
                
                if (rcx_19 == 0)
                    bool z_1
                    
                    if (0 == var_110_1)
                        var_110_1 = 0
                        z_1 = true
                    else
                        z_1 = false
                    
                    if (not(z_1))
                        int128_t var_98 = var_120_1.o
                        sub_141cff040(var_150, (var_148 + 0xf) & 0xfffffff0, &var_98)
                        int32_t var_178_2 = 0
                        sub_140b02330(var_144, var_160, var_158, var_150, var_148, 0)
                        
                        if (var_138 != 0)
                            memcpy(var_138, var_160 + var_130, count)
                        
                        var_110_1 -= 1
                    
                    goto label_141d0f310
                
                if ((*(*rcx_19 + 0x18))(rcx_19, &var_168) == 0)
                label_141d0f310:
                    
                    if (var_108:8.q != 0)
                        int64_t* rcx_27 = var_108.q
                        (*(*rcx_27 + 0x20))(rcx_27, 0xffffffff, 0)
                        var_108:8.q = 0
                else
                    int128_t var_a8 = var_120_1.o
                    sub_141cff040(var_150, (var_148 + 0xf) & 0xfffffff0, &var_a8)
                    int32_t var_178_1 = 0
                    sub_140b02330(var_144, var_160, var_158, var_150, var_148, 0)
                    
                    if (var_138 != 0)
                        memcpy(var_138, var_160 + var_130, count)
                    
                    var_110_1 -= 1
                    int64_t* rcx_23 = var_108.q
                    
                    if (rcx_23 != 0)
                        (*(*rcx_23 + 0x10))(rcx_23)
                    
                    var_108:8.q = 0
            
            var_120_1.o = *(*arg1 + 0xd0)
            int64_t* rcx_28
            int32_t rdx_26
            
            if (r15 != 0 || i s< sx.q(arg_20))
                rcx_28 = arg1
                var_144 = rbx_1
                rdx_26 = r12
                var_160 = *(rax_5 + 0x18)
                var_150 = rcx_17
                var_148 = var_e8_1
                var_130 = r15
                r15 = 0
                var_138 = arg_18
                count = i_1.d
            else
                rcx_28 = r15
                var_160 = arg_18
                rdx_26 = -1
                var_150 = rcx_17
                var_148 = var_e8_1
                var_144 = rbx_1
                var_138 = r15
            
            var_158 = r13_1.d
            *(rax_5 + 0x38) = rdx_26
            *(rax_5 + 0x30) = rcx_28
            int128_t* r8_10
            
            if (i != i_1)
                int64_t rax_48 = data_143db7ac8
                var_110_1 += 1
                var_108:8.q = rax_48
                
                if (rax_48 == 0)
                    sub_140a4fc50(var_108.q)
                    int128_t var_78
                    r8_10 = &var_78
                    var_78 = var_120_1.o
                    goto label_141d0f45f
                
                void*** rax_49 = var_108.q
                
                if (rax_49 == 0)
                    rcx_28.b = 1
                    rax_49 = sub_140a491d0(rcx_28.b)
                    var_108.q = rax_49
                
                void** rdx_27 = *rax_49
                rdx_27[3](rax_49, rdx_27)
                int64_t* rcx_31 = var_108:8.q
                (*(*rcx_31 + 0x10))(rcx_31, &var_168)
            else
                var_110_1 += 1
                int64_t* rcx_29 = var_108.q
                var_108:8.q = r15
                sub_140a4fc50(rcx_29)
                int128_t var_88
                r8_10 = &var_88
                var_88 = var_120_1.o
            label_141d0f45f:
                var_108.q = r15
                sub_141cff040(var_150, (var_148 + 0xf) & 0xfffffff0, r8_10)
                int32_t var_178_3 = r15.d
                sub_140b02330(var_144, var_160, var_158, var_150, var_148, r15.d)
                
                if (var_138 != 0)
                    memcpy(var_138, var_160 + var_130, count)
                
                var_110_1 -= 1
            rax_23 = 1
            arg_8 = 1
        else
            memcpy(arg_18, *(rax_5 + 0x18) + r15, i_1.d)
            rax_23 = arg_8
        
        arg_18 += i_1
        rdx_6 = &arg1[7]
        r9 = rax_13
        i -= i_1
        r12 += 1
        r15 = 0
    while (i s> 0)
    
    if (rax_23 == 0)
        rcx_40 = var_108.q
    else
        int64_t* rcx_36 = var_108:8.q
        
        if (rcx_36 == 0)
            bool z_2
            
            if (0 == var_110_1)
                var_110_1 = 0
                z_2 = true
            else
                z_2 = false
            
            if (not(z_2))
                int128_t var_58 = var_120_1.o
                sub_141cff040(var_150, (var_148 + 0xf) & 0xfffffff0, &var_58)
                int32_t var_178_5 = 0
                sub_140b02330(var_144, var_160, var_158, var_150, var_148, 0)
                
                if (var_138 != 0)
                    memcpy(var_138, var_160 + var_130, count)
                
                int32_t var_110_3 = var_110_1 - 1
            
            goto label_141d0f606
        
        if ((*(*rcx_36 + 0x18))(rcx_36, &var_168) == 0)
        label_141d0f606:
            
            if (var_108:8.q == 0)
                rcx_40 = var_108.q
            else
                int64_t* rcx_44 = var_108.q
                (*(*rcx_44 + 0x20))(rcx_44, 0xffffffff, 0)
                var_108:8.q = 0
                rcx_40 = var_108.q
        else
            int128_t var_68 = var_120_1.o
            sub_141cff040(var_150, (var_148 + 0xf) & 0xfffffff0, &var_68)
            int32_t var_178_4 = 0
            sub_140b02330(var_144, var_160, var_158, var_150, var_148, 0)
            
            if (var_138 != 0)
                memcpy(var_138, var_160 + var_130, count)
            
            int32_t var_110_2 = var_110_1 - 1
            rcx_40 = var_108.q
            
            if (rcx_40 != 0)
                (*(*rcx_40 + 0x10))(rcx_40)
                rcx_40 = var_108.q
            
            var_108:8.q = 0

var_168 = &data_14321ded0
return sub_140a4fc50(rcx_40)
