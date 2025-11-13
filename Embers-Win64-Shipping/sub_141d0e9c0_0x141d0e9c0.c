// 函数: sub_141d0e9c0
// 地址: 0x141d0e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_18 = arg3
uint64_t rdi = zx.q(arg1[9].d)
int32_t arg_20 = rdi.d
int64_t i = arg4
int32_t r12 = (divs.dp.q(sx.o(arg2), sx.q(rdi.d))).d
int64_t r15 = mods.dp.q(sx.o(arg2), rdi)
void** const var_108 = &data_14321deb8
int128_t* var_100
memset(&var_100, 0, 0x50)
void** var_e4 = nullptr
int64_t var_c0_1
__builtin_memset(&var_c0_1, 0, 0x14)
char arg_10 = 0
char* var_68 = &arg_10
void*** (* var_70)() = j_sub_141cf98c0
int128_t var_a8 = zx.o(0)
void* rax_5 = sub_140a756e0(&var_70, &data_143a21154)
char arg_8 = 0
void** rbx_1 = *(*(*arg1 + 0xe0) + (zx.q(*(arg1 + 0x4c)) << 3))
uint128_t zmm0 = zx.o(sub_140aecee0(rbx_1, rdi.d, 0, 0))
int64_t rax_7 = *(rax_5 + 0x10)
zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 1.10000002f
int64_t rdi_1 = int.q(zmm0.d)
sub_141d012b0(rax_5, sx.q(arg_20), rdi_1 * 2)
int64_t rax_8 = *(rax_5 + 0x28)
void* rcx_7 = &arg1[0x10]
int64_t var_60 = rax_8
int64_t var_58 = rax_8 + rdi_1
void* rax_10 = arg1[0xe]

if (rax_10 != 0)
    rcx_7 = rax_10

int64_t* rax_13 = arg1[0xc]((*(*rcx_7 + 8))(rcx_7))
int64_t* r8_1 = rax_13
int64_t* rcx_33

if (i s<= 0)
    rcx_33 = var_a8.q
else
    void* rdx_6 = &arg1[7]
    int32_t var_f8
    char* var_f0
    int32_t var_e8
    int128_t* var_d8
    int64_t var_d0
    uint32_t count
    int32_t var_b0_1
    char rax_23
    
    do
        void* rcx_10 = *rdx_6
        
        if ((rcx_10.b & 1) != 0)
            rcx_10 = (rcx_10 s>> 1) + rdx_6
        
        int64_t i_1 = i
        uint64_t r13_1 = zx.q(arg1[9].d)
        int64_t rax_15 = sx.q(r12) * 2
        int64_t rdx_7 = *(rcx_10 + (rax_15 << 3))
        int64_t rax_17 = *(rcx_10 + (rax_15 << 3) + 8) - rdx_7
        uint64_t rax_19 = arg1[3] - zx.q(r12 * arg_20)
        int64_t rcx_13 = sx.q(arg_20)
        
        if (rax_19 s<= r13_1)
            r13_1 = rax_19
        
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
            
            (*(*r8_1 + 0x178))(r8_1, rdx_7 + rcx_15)
            char* rcx_17 = (&var_60)[zx.q(r12) & 1]
            (*(*rax_13 + 0x150))(rax_13, rcx_17, rax_17)
            
            if (arg_8 != 0)
                int64_t* rcx_19 = var_a8:8.q
                
                if (rcx_19 == 0)
                    bool z_1
                    
                    if (0 == var_b0_1)
                        var_b0_1 = 0
                        z_1 = true
                    else
                        z_1 = false
                    
                    if (not(z_1))
                        int32_t var_118_2 = 0
                        sub_140b02330(var_e4, var_100, var_f8, var_f0, var_e8, 0)
                        
                        if (var_d8 != 0)
                            memcpy(var_d8, var_100 + var_d0, count)
                        
                        var_b0_1 -= 1
                    
                    goto label_141d0ecc6
                
                if ((*(*rcx_19 + 0x18))(rcx_19, &var_108) == 0)
                label_141d0ecc6:
                    
                    if (var_a8:8.q != 0)
                        int64_t* rcx_25 = var_a8.q
                        (*(*rcx_25 + 0x20))(rcx_25, 0xffffffff, 0)
                        var_a8:8.q = 0
                else
                    int32_t var_118_1 = 0
                    sub_140b02330(var_e4, var_100, var_f8, var_f0, var_e8, 0)
                    
                    if (var_d8 != 0)
                        memcpy(var_d8, var_100 + var_d0, count)
                    
                    var_b0_1 -= 1
                    int64_t* rcx_22 = var_a8.q
                    
                    if (rcx_22 != 0)
                        (*(*rcx_22 + 0x10))(rcx_22)
                    
                    var_a8:8.q = 0
            
            var_c0_1.o = *(*arg1 + 0xd0)
            int64_t* rcx_26
            int32_t rdx_19
            
            if (r15 != 0 || i s< sx.q(arg_20))
                rcx_26 = arg1
                var_e4 = rbx_1
                rdx_19 = r12
                var_100 = *(rax_5 + 0x18)
                var_f0 = rcx_17
                var_e8 = rax_17.d
                var_d0 = r15
                r15 = 0
                var_d8 = arg_18
                count = i_1.d
            else
                rcx_26 = r15
                var_100 = arg_18
                rdx_19 = -1
                var_f0 = rcx_17
                var_e8 = rax_17.d
                var_e4 = rbx_1
                var_d8 = r15
            
            var_f8 = r13_1.d
            *(rax_5 + 0x38) = rdx_19
            *(rax_5 + 0x30) = rcx_26
            
            if (i != i_1)
                int64_t rax_54 = data_143db7ac8
                var_b0_1 += 1
                var_a8:8.q = rax_54
                
                if (rax_54 == 0)
                    goto label_141d0ed97
                
                void*** rax_55 = var_a8.q
                
                if (rax_55 == 0)
                    rcx_26.b = 1
                    rax_55 = sub_140a491d0(rcx_26.b)
                    var_a8.q = rax_55
                
                void** rdx_27 = *rax_55
                rdx_27[3](rax_55, rdx_27)
                int64_t* rcx_35 = var_a8:8.q
                (*(*rcx_35 + 0x10))(rcx_35, &var_108)
            else
                var_b0_1 += 1
                var_a8:8.q = r15
            label_141d0ed97:
                sub_140a4fc50(var_a8.q)
                int32_t var_118_3 = r15.d
                var_a8.q = r15
                sub_140b02330(var_e4, var_100, var_f8, var_f0, var_e8, r15.d)
                
                if (var_d8 != 0)
                    memcpy(var_d8, var_100 + var_d0, count)
                
                var_b0_1 -= 1
            
            rax_23 = 1
            arg_8 = 1
        else
            memcpy(arg_18, *(rax_5 + 0x18) + r15, i_1.d)
            rax_23 = arg_8
        
        arg_18 += i_1
        rdx_6 = &arg1[7]
        r8_1 = rax_13
        i -= i_1
        r12 += 1
        r15 = 0
    while (i s> 0)
    
    if (rax_23 == 0)
        rcx_33 = var_a8.q
    else
        int64_t* rcx_30 = var_a8:8.q
        
        if (rcx_30 == 0)
            bool z_2
            
            if (0 == var_b0_1)
                var_b0_1 = 0
                z_2 = true
            else
                z_2 = false
            
            if (not(z_2))
                int32_t var_118_5 = 0
                sub_140b02330(var_e4, var_100, var_f8, var_f0, var_e8, 0)
                
                if (var_d8 != 0)
                    memcpy(var_d8, var_100 + var_d0, count)
                
                int32_t var_b0_3 = var_b0_1 - 1
            
            goto label_141d0ef41
        
        if ((*(*rcx_30 + 0x18))(rcx_30, &var_108) == 0)
        label_141d0ef41:
            
            if (var_a8:8.q == 0)
                rcx_33 = var_a8.q
            else
                int64_t* rcx_38 = var_a8.q
                (*(*rcx_38 + 0x20))(rcx_38, 0xffffffff, 0)
                var_a8:8.q = 0
                rcx_33 = var_a8.q
        else
            int32_t var_118_4 = 0
            sub_140b02330(var_e4, var_100, var_f8, var_f0, var_e8, 0)
            
            if (var_d8 != 0)
                memcpy(var_d8, var_100 + var_d0, count)
            
            int32_t var_b0_2 = var_b0_1 - 1
            rcx_33 = var_a8.q
            
            if (rcx_33 != 0)
                (*(*rcx_33 + 0x10))(rcx_33)
                rcx_33 = var_a8.q
            
            var_a8:8.q = 0

var_108 = &data_14321deb8
return sub_140a4fc50(rcx_33)
