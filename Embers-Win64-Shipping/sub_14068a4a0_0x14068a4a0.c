// 函数: sub_14068a4a0
// 地址: 0x14068a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void**** r12 = arg1
char* var_c8 = arg2
char* var_c0 = arg2
int64_t var_b0
__builtin_memset(&var_b0, 0, 0x20)
int128_t var_a8
sub_1406afb70(&var_a8, 0)
void*** i_13 = j_sub_140a82f30(0x30)
void*** i_12 = i_13

if (i_13 == 0)
    i_12 = nullptr
else
    i_13[1] = 0x14
    i_13[2] = 0
    i_13[3] = 0
    *i_12 = &data_142d8b598
    *(i_12 + 0x24) = 0
    *(i_12 + 0x2c) = 0

int32_t var_78 = arg4
void*** i_7 = i_12
int32_t var_68 = not.d(arg4 u>> 3) & 0x100
int32_t rbx_1 = arg4 & 0x3f
void* var_70 = &arg1[1]
int32_t var_64 = not.d(arg4 u>> 9) & 4
void* var_60 = &arg1[1]
int32_t rdx

if (rbx_1 u< 2)
    rdx = 0x8775dfb
else if (rbx_1 == 2)
    rdx = 0x6e000300
else if (rbx_1 == 4)
    rdx = 0x7080001b
else if (rbx_1 == 8)
    rdx = 0x7181a01b
else if (rbx_1 != 0x10)
    rdx = 0
    
    if (rbx_1 == 0x20)
        rdx = 0x7088001f
else
    rdx = 0x6e080304

int32_t var_48 = rdx

if (test_bit(rdx, 0x1e))
    *(i_12 + 0xc) |= 8
    rdx = var_48

char* r9 = var_c8
int64_t r10 = arg3
int32_t var_4c
int32_t rax_8
int32_t r8

if (r9 != r10)
    int32_t ch = sx.d(*r9)
    char var_50_1 = ch.b
    char* rax_9 = strchr("()$^.*+?[]|\-{},:=!\n\r", ch)
    rdx = var_48
    r10 = arg3
    r9 = var_c8
    
    if (rax_9 == 0)
        rax_8 = zx.d(var_50_1)
        r8 = 0
        var_4c = 0
    else
        rax_8 = sx.d(var_50_1)
        r8 = rax_8
        var_4c = rax_8
else
    r8 = -1
    rax_8 = 0xff
    var_4c = 0xffffffff
    char var_50 = 0xff

if (sx.d(rax_8.b) - 0xa u<= 0x73)
    switch (rax_8.b)
        case 0xa
            if ((rdx.b & 4) != 0 && var_b0:4.d == 0)
                var_4c = 0x7c
        case 0x24
            if (test_bit(rdx, 0x19) && &r9[1] != r10 && r9[1] != 0xa)
                var_4c = 0
        case 0x28, 0x29
            if ((rdx.b & 8) == 0)
                var_4c = 0
        case 0x2a
            if (test_bit(rdx, 0x1a) && sub_1406aa7e0(&i_7) != 0)
                var_4c = 0
        case 0x2b, 0x3f
            if ((rdx.b & 1) == 0)
                var_4c = 0
        case 0x5c
            if (&r9[1] != r10)
                char rax_14
                char rcx_3
                
                if ((rdx.b & 8) == 0)
                    rcx_3 = r9[1]
                    rax_14 = rcx_3
                
                char var_50_2
                
                if ((rdx.b & 8) == 0 && (rcx_3 == 0x28 || rcx_3 == 0x29))
                    var_50_2 = rax_14
                    var_4c = sx.d(rax_14)
                else if ((rdx.b & 0x10) == 0)
                    char rcx_4 = r9[1]
                    
                    if (rcx_4 == 0x7b || rcx_4 == 0x7d)
                        var_50_2 = rcx_4
                        var_4c = sx.d(rcx_4)
        case 0x5e
            if (test_bit(rdx, 0x19) && sub_1406aa7e0(&i_7) == 0)
                var_4c = 0
        case 0x7b, 0x7d
            if ((rdx.b & 0x10) == 0)
                var_4c = 0
        case 0x7c
            if ((var_48.b & 2) == 0)
                r8 = 0
            
            var_4c = r8

void*** rax_18 = sub_1406aa820(&i_7, 0)
void*** r15 = rax_18

if (sub_1406aa0a0(&var_c8) != 0)
    goto label_14068a77c

if (var_4c == 0x7c)
    sub_1406ad700(&i_7, sub_1406aeb90(&i_7, 8))
label_14068a77c:
    void*** rax_21 = j_sub_140a82f30(0x20)
    void*** rsi_1 = rax_21
    
    if (rax_21 == 0)
        rsi_1 = nullptr
    else
        rax_21[1] = 0x11
        rax_21[2] = 0
        rax_21[3] = 0
        *rsi_1 = &data_142d8b590
    
    rsi_1[3] = i_12
    void*** i_14 = i_12
    int64_t rcx_11 = i_14[2]
    
    if (rcx_11 != 0)
        rsi_1[2] = rcx_11
        i_12[2][3] = rsi_1
        i_14 = i_12
    
    i_14[2] = rsi_1
    void*** var_80_1 = rsi_1
    void*** rdx_3 = j_sub_140a82f30(0x30)
    
    if (rdx_3 == 0)
        rdx_3 = nullptr
    else
        rdx_3[1] = 0x10
        rdx_3[2] = 0
        rdx_3[3] = 0
        *rdx_3 = &data_142d8b5b0
        rdx_3[4] = rsi_1
        rdx_3[5] = 0
    
    void* rcx_13 = i_12[2]
    *(*(rcx_13 + 0x18) + 0x10) = rdx_3
    rdx_3[3] = *(rcx_13 + 0x18)
    *(rcx_13 + 0x18) = rdx_3
    rdx_3[2] = rcx_13
    
    if (var_4c == 0x7c)
        int32_t i
        
        do
            char* rdx_4 = var_c8
            int64_t r10_1 = arg3
            int32_t r9_3 = var_48
            int32_t i_2
            int32_t i_5
            
            if (rdx_4 == r10_1)
            label_14068a8f0:
                i_5 = -1
                i_2 = 0xff
                i = 0xffffffff
                char var_50_3 = 0xff
            else
                if (*rdx_4 == 0x5c && &rdx_4[1] != r10_1)
                    if ((r9_3.b & 8) == 0 && rdx_4[1] - 0x28 u<= 1)
                        rdx_4 = &rdx_4[1]
                    else if ((r9_3.b & 0x10) == 0 && ((rdx_4[1] - 0x7b) & 0xfd) == 0)
                        rdx_4 = &rdx_4[1]
                
                rdx_4 = &rdx_4[1]
                var_c8 = rdx_4
                
                if (rdx_4 == r10_1)
                    goto label_14068a8f0
                
                int32_t ch_1 = sx.d(*rdx_4)
                char i_8 = ch_1.b
                char* rax_29 = strchr("()$^.*+?[]|\-{},:=!\n\r", ch_1)
                r9_3 = var_48
                r10_1 = arg3
                rdx_4 = var_c8
                
                if (rax_29 == 0)
                    i_2 = zx.d(i_8)
                    i_5 = 0
                    i = 0
                else
                    i_2 = sx.d(i_8)
                    i_5 = i_2
                    i = i_2
            
            if (sx.d(i_2.b) - 0xa u<= 0x73)
                switch (i_2.b)
                    case 0xa
                        if ((r9_3.b & 4) != 0 && var_b0:4.d == 0)
                            i = 0x7c
                    case 0x24
                        if (test_bit(r9_3, 0x19) && &rdx_4[1] != r10_1 && rdx_4[1] != 0xa)
                            i = 0
                    case 0x28, 0x29
                        if ((r9_3.b & 8) == 0)
                            i = 0
                    case 0x2a
                        if (test_bit(r9_3, 0x1a))
                            int32_t rax_35 = var_80_1[1].d
                            
                            if (rax_35 u<= 0x14 && test_bit(0x102100, rax_35))
                                i = 0
                            else if (rax_35 == 2)
                                int32_t rcx_18 = var_80_1[3][1].d
                                
                                if (rcx_18 u<= 0x14 && test_bit(0x102100, rcx_18))
                                    i = 0
                    case 0x2b, 0x3f
                        if ((r9_3.b & 1) == 0)
                            i = 0
                    case 0x5c
                        if (&rdx_4[1] != r10_1)
                            char i_3
                            char i_10
                            
                            if ((r9_3.b & 8) == 0)
                                i_10 = rdx_4[1]
                                i_3 = i_10
                            
                            char i_9
                            
                            if ((r9_3.b & 8) == 0 && (i_10 == 0x28 || i_10 == 0x29))
                                i_9 = i_3
                                i = sx.d(i_3)
                            else if ((r9_3.b & 0x10) == 0)
                                char i_11 = rdx_4[1]
                                i_3 = i_11
                                
                                if (i_11 == 0x7b || i_11 == 0x7d)
                                    i_9 = i_3
                                    i = sx.d(i_3)
                    case 0x5e
                        if (test_bit(r9_3, 0x19))
                            int32_t rax_37 = var_80_1[1].d
                            
                            if (rax_37 u> 0x14 || not(test_bit(0x102100, rax_37)))
                                if (rax_37 != 2)
                                    i = 0
                                else
                                    int32_t rcx_20 = var_80_1[3][1].d
                                    
                                    if (rcx_20 u> 0x14)
                                        i = 0
                                    else if (not(test_bit(0x102100, rcx_20)))
                                        i = 0
                    case 0x7b, 0x7d
                        if ((r9_3.b & 0x10) == 0)
                            i = 0
                    case 0x7c
                        if ((var_48.b & 2) == 0)
                            i_5 = 0
                        
                        i = i_5
            
            if (sub_1406aa0a0(&var_c8) == 0)
                void*** rax_40 = j_sub_140a82f30(0x20)
                void*** rbx_2 = rax_40
                
                if (rax_40 == 0)
                    rbx_2 = nullptr
                else
                    *rax_40 = &data_142d8b590
                    rax_40[1] = 8
                    rax_40[2] = 0
                    rax_40[3] = 0
                
                rbx_2[3] = var_80_1
                void*** rax_42 = var_80_1
                int64_t rcx_22 = rax_42[2]
                
                if (rcx_22 != 0)
                    rbx_2[2] = rcx_22
                    var_80_1[2][3] = rbx_2
                    rax_42 = var_80_1
                
                rax_42[2] = rbx_2
                int32_t rax_44 = rbx_2[1].d
                int32_t rdi_1
                
                if (rax_44 != 8)
                    rdi_1 = 0xc
                    
                    if (rax_44 - 0xa u> 1)
                        rdi_1 = 0xe
                else
                    rdi_1 = rax_44 + 1
                
                void*** rax_46 = j_sub_140a82f30(0x28)
                void*** rdx_8 = rax_46
                
                if (rax_46 == 0)
                    rdx_8 = nullptr
                else
                    rax_46[1].d = rdi_1
                    __builtin_memset(rax_46 + 0xc, 0, 0x14)
                    *rdx_8 = &data_142d8b5a0
                    rdx_8[4] = rbx_2
                
                rdx_8[3] = rbx_2
                void*** rax_48 = rbx_2
                int64_t rcx_24 = rax_48[2]
                
                if (rcx_24 != 0)
                    rdx_8[2] = rcx_24
                    rbx_2[2][3] = rdx_8
                    rax_48 = rbx_2
                
                rax_48[2] = rdx_8
                var_80_1 = rdx_8
            
            void* j_2 = i_12[2]
            void* rdi_2 = rsi_1[2]
            rsi_1[2] = 0
            void*** rax_50 = var_80_1
            var_80_1 = rsi_1
            rsi_1[2] = 0
            rax_50[2] = rsi_1
            
            for (void* j = *(j_2 + 0x28); j != 0; j = *(j + 0x28))
                j_2 = j
            
            void*** rax_51 = j_sub_140a82f30(0x30)
            
            if (rax_51 == 0)
                rax_51 = nullptr
            else
                rax_51[1] = 0x10
                rax_51[3] = 0
                *rax_51 = &data_142d8b5b0
                rax_51[4] = rsi_1
                rax_51[5] = 0
            
            *(j_2 + 0x28) = rax_51
            rax_51[2] = rdi_2
            *(rdi_2 + 0x18) = *(j_2 + 0x28)
        while (i == 0x7c)
        r15 = rax_18
        r12 = arg1

if (var_c8 != arg3)
    sub_1406ad7b0(&var_c8, error_syntax)
    noreturn

sub_1406ad700(&i_7, r15)
sub_1406aeb90(&i_7, 0x15)
void*** i_6 = i_7
void*** i_4 = nullptr
void*** i_1 = i_6
i_6[4].d = arg4
i_6[5].d = var_b0.d + 1

if (i_6 != 0)
    do
        int32_t rcx_28 = i_1[1].d
        
        if (rcx_28 == 0xa || rcx_28 == 0xb)
            sub_1406aa900(i_1[4], 0, nullptr)
        else if (rcx_28 == 0x10)
            if (i_4 != 0)
                *(i_4 + 0x34) = 0
            
            for (void* j_1 = i_1[5]; j_1 != 0; j_1 = *(j_1 + 0x28))
                sub_1406aa900(*(j_1 + 0x10), *(j_1 + 0x20), i_4)
        else if (rcx_28 == 0x12)
            if (i_4 == 0)
                i_4 = i_1
            else
                *(i_4 + 0x34) = 0
                *(i_1 + 0x34) = 0
        else if (rcx_28 == 0x13 && i_4 == i_1[4])
            if (*(i_4 + 0x34) == 0xffffffff)
                *(i_4 + 0x34) = rcx_28 - 0x12
            
            i_4 = nullptr
        
        i_1 = i_1[2]
    while (i_1 != 0)

*(i_6 + 0x2c) += 1
int64_t result = sub_1406af870(r12)
void* rcx_36 = var_a8.q
*r12 = i_6

if (rcx_36 == 0)
    return result

void* rax_57 = rcx_36
int64_t var_98

if (((var_98 - rcx_36) & 0xfffffffffffffffc) u>= 0x1000)
    rcx_36 = *(rcx_36 - 8)
    
    if (rax_57 - rcx_36 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn

return j_sub_140a74f90(rcx_36)
