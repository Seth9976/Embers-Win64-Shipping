// 函数: sub_1413ef830
// 地址: 0x1413ef830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (data_1439b6b08 != 0 || data_1439b6b04 != 0)
    rax = 1
else
    rax = 0

int64_t* rdi = *(arg2 + 0x78)
int128_t zmm6 = zx.o(0)
int128_t var_a8 = zx.o(0)
void* var_198

if (rax == 0)
    char var_1d0_11 = 1
    int32_t var_1d8_11 = 0
    void** rax_44
    rax_44, arg5 = sub_142127800(arg7, &var_198, &data_143ec8550, (*(*rdi + 0x40))(rdi), arg5)
    var_a8.q = *rax_44
    var_a8:8.q = rax_44[1]
    zmm6 = var_a8
else
    int64_t rsi
    rsi.b = data_143e51034 != 0
    int32_t rdx = *arg8
    void* var_1a8
    void var_188
    void var_178
    int64_t* rcx_4
    void** rdx_5
    int64_t* r8
    void* r9
    
    if (rdx == 0)
        if ((*(*arg7 + 0x1c0))(arg7, rdx) != 0)
            if (data_1439b6b08 == 0)
                goto label_1413efc4c
            
            goto label_1413efc0d
        
        if ((*(*arg7 + 0x1d8))(arg7) == 2 && data_1439b6b08 != 0)
        label_1413efc0d:
            char var_1d0_9 = 1
            r9 = (*(*rdi + 0x40))(rdi)
            int32_t var_1d8_9 = 0
            rcx_4 = arg7
            
            if (rsi.b == 0)
                r8 = &data_143eca660
                rdx_5 = &var_178
            else
                r8 = &data_143eca920
                rdx_5 = &var_198
            
            goto label_1413efc7e
        
    label_1413efc4c:
        char var_1d0_10 = 1
        r9 = (*(*rdi + 0x40))(rdi)
        int32_t var_1d8_10 = 0
        rcx_4 = arg7
        
        if (rsi.b == 0)
            r8 = &data_143eca500
            rdx_5 = &var_1a8
            goto label_1413efc7e
        
        r8 = &data_143eca7c0
        rdx_5 = &var_188
    label_1413efc7e:
        void** rax_41
        rax_41, arg5 = sub_142127800(rcx_4, rdx_5, r8, r9, arg5)
        int64_t var_1a0_1 = rax_41[1]
        var_1a8 = *rax_41
        zmm6 = var_1a8.o
    else
        if (rdx == 1)
            if ((*(*arg7 + 0x1c0))(arg7, rdx - 1) == 0)
                if ((*(*arg7 + 0x1d8))(arg7) != 2 || data_1439b6b08 == 0)
                label_1413efba2:
                    char var_1d0_8 = 1
                    r9 = (*(*rdi + 0x40))(rdi)
                    int32_t var_1d8_8 = 0
                    rcx_4 = arg7
                    
                    if (rsi.b == 0)
                        r8 = &data_143ecaa80
                        rdx_5 = &var_1a8
                        goto label_1413efc7e
                    
                    r8 = &data_143ecad40
                    rdx_5 = &var_188
                    goto label_1413efc7e
            else if (data_1439b6b08 == 0)
                goto label_1413efba2
            
            char var_1d0_7 = 1
            r9 = (*(*rdi + 0x40))(rdi)
            int32_t var_1d8_7 = 0
            rcx_4 = arg7
            
            if (rsi.b == 0)
                r8 = &data_143ecabe0
                rdx_5 = &var_178
            else
                r8 = &data_143ecaea0
                rdx_5 = &var_198
            
            goto label_1413efc7e
        
        if (rdx == 0xa)
            if ((*(*arg7 + 0x1c0))(arg7, rdx - 0xa) == 0)
                if ((*(*arg7 + 0x1d8))(arg7) == 2 && data_1439b6b08 != 0)
                label_1413efaad:
                    char var_1d0_5 = 1
                    r9 = (*(*rdi + 0x40))(rdi)
                    int32_t var_1d8_5 = 0
                    rcx_4 = arg7
                    
                    if (rsi.b == 0)
                        r8 = &data_143ecb160
                        rdx_5 = &var_178
                    else
                        r8 = &data_143ecb420
                        rdx_5 = &var_198
                    
                    goto label_1413efc7e
            else if (data_1439b6b08 != 0)
                goto label_1413efaad
            
            char var_1d0_6 = 1
            r9 = (*(*rdi + 0x40))(rdi)
            int32_t var_1d8_6 = 0
            rcx_4 = arg7
            
            if (rsi.b == 0)
                r8 = &data_143ecb000
                rdx_5 = &var_1a8
                goto label_1413efc7e
            
            r8 = &data_143ecb2c0
            rdx_5 = &var_188
            goto label_1413efc7e
        
        if (rdx == 0xb)
            if ((*(*arg7 + 0x1c0))(arg7, rdx - 0xb) == 0)
                if ((*(*arg7 + 0x1d8))(arg7) == 2 && data_1439b6b08 != 0)
                label_1413ef9fd:
                    char var_1d0_3 = 1
                    r9 = (*(*rdi + 0x40))(rdi)
                    int32_t var_1d8_3 = 0
                    rcx_4 = arg7
                    
                    if (rsi.b == 0)
                        r8 = &data_143ecb6e0
                        rdx_5 = &var_178
                    else
                        r8 = &data_143ecb9a0
                        rdx_5 = &var_198
                    
                    goto label_1413efc7e
            else if (data_1439b6b08 != 0)
                goto label_1413ef9fd
            
            char var_1d0_4 = 1
            r9 = (*(*rdi + 0x40))(rdi)
            int32_t var_1d8_4 = 0
            rcx_4 = arg7
            
            if (rsi.b == 0)
                r8 = &data_143ecb580
                rdx_5 = &var_1a8
                goto label_1413efc7e
            
            r8 = &data_143ecb840
            rdx_5 = &var_188
            goto label_1413efc7e
        
        if (rdx == 0xc)
            if ((*(*arg7 + 0x1c0))(arg7, rdx - 0xb) == 0)
                if ((*(*arg7 + 0x1d8))(arg7) != 2 || data_1439b6b08 == 0)
                label_1413ef98e:
                    char var_1d0_2 = 1
                    r9 = (*(*rdi + 0x40))(rdi)
                    int32_t var_1d8_2 = 0
                    rcx_4 = arg7
                    
                    if (rsi.b == 0)
                        r8 = &data_143ecbb00
                        rdx_5 = &var_198
                    else
                        r8 = &data_143ecbdc0
                        rdx_5 = &var_178
                    
                    goto label_1413efc7e
            else if (data_1439b6b08 == 0)
                goto label_1413ef98e
            
            char var_1d0_1 = 1
            r9 = (*(*rdi + 0x40))(rdi)
            int32_t var_1d8_1 = 0
            rcx_4 = arg7
            
            if (rsi.b == 0)
                r8 = &data_143ecbc60
                rdx_5 = &var_188
                goto label_1413efc7e
            
            r8 = &data_143ecbf20
            rdx_5 = &var_1a8
            goto label_1413efc7e
void* rcx_26 = arg1[1]
arg5.o = zx.o(0)
void* rdx_18 = arg1[2]
char var_1d0_12 = 1
int32_t var_138 = 0x11
int64_t var_130 = *(rcx_26 + 0x20)
int64_t var_118 = *(rcx_26 + 0x38)
int64_t var_148 = data_1439b53b8
int64_t var_140 = data_1439b53d0
int128_t var_128 = arg5.o
int32_t var_110 = 0
int128_t var_168 = arg5.o
int64_t var_158 = *arg9
int32_t var_1d8_12 = 0xffffffff
sub_141458e70(&var_168, rdx_18, arg4, arg2, 0xffffffff, 1)
int128_t var_108
__builtin_memset(&var_108, 0, 0x60)
var_1d0_12.q = arg7
var_1d8_12.q = arg6
int128_t var_a8_1 = zmm6
return sub_1413b7a40(arg1, arg2, arg3, arg4, 0xffffffff, var_1d0_12, &var_148, &var_108, &var_168)
