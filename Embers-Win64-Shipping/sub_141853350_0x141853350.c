// 函数: sub_141853350
// 地址: 0x141853350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* const rbx
rbx.b = 0
int64_t* rdi = arg4
int64_t* r12 = arg2
int16_t* const r13 = &data_142d40450
int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t* var_198
(*(*arg1 + 0x48))(arg1, &var_198, r8, 0)
int64_t* r15 = nullptr

if (arg6[1].d != 0)
    int64_t* rcx = *arg6
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg6[1].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *arg6
        
        arg5.o = zx.o(0)
        (*(*rcx_1 + 0x50))(rcx_1, arg5)

if (var_198 == 0)
    if (r12[1].d != 0)
        r13 = *r12
    
    sub_140b19e60()
    sub_140b1f700(&data_1439a8bd0, u"BuildDataGenerator: ERROR VerifyFile cannot open %s", r13)
else
    void var_148
    sub_140b2f110(&var_148)
    int64_t* rcx_3 = var_198
    int64_t var_168
    __builtin_memset(&var_168, 0, 0x14)
    int64_t rax_7 = (*(*rcx_3 + 0x28))(rcx_3, arg5)
    void* rax_8 = j_sub_140a82f30(0x400000)
    int64_t* rcx_4 = var_198
    rbx = rax_8
    int64_t rdx_1 = *rcx_4
    
    if ((*(rdx_1 + 0x30))(rcx_4, rdx_1) == 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        char i
        
        do
            if (arg8[1].d != 0)
                int64_t* rcx_5 = *arg8
                
                if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                    int64_t* rcx_6
                    
                    if (arg8[1].d == 0)
                        rcx_6 = nullptr
                    else
                        rcx_6 = *arg8
                    
                    if ((*(*rcx_6 + 0x48))(rcx_6) != 0)
                        break
            
            while (arg7[1].d != 0)
                int64_t* rcx_7 = *arg7
                
                if (rcx_7 == 0)
                    break
                
                if ((*(*rcx_7 + 0x28))(rcx_7) == 0)
                    break
                
                int64_t* rcx_8
                
                if (arg7[1].d == 0)
                    rcx_8 = nullptr
                else
                    rcx_8 = *arg7
                
                if ((*(*rcx_8 + 0x48))(rcx_8) == 0)
                    break
                
                if (arg8[1].d != 0)
                    int64_t* rcx_9 = *arg8
                    
                    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
                        int64_t* rcx_10
                        
                        if (arg8[1].d == 0)
                            rcx_10 = nullptr
                        else
                            rcx_10 = *arg8
                        
                        if ((*(*rcx_10 + 0x48))(rcx_10) != 0)
                            break
                
                sub_140b73230(0x3dcccccd)
            
            int64_t* rcx_11 = var_198
            int64_t rdi_2 = rax_7 - (*(*rcx_11 + 0x20))(rcx_11)
            uint64_t rbx_1 = zx.q(rdi_2.d)
            
            if (rdi_2 s>= 0x400000)
                rbx_1 = 0x400000
            
            int64_t* rcx_12 = var_198
            (*(*rcx_12 + 0x150))(rcx_12, rbx, zx.q(rbx_1.d))
            sub_140b4ad80(&var_148, rbx, zx.q(rbx_1.d))
            int128_t zmm0_1
            zmm0_1.q = float.d(rax_7)
            double zmm1 = 0x3ff0000000000000 f- float.d(rdi_2 - rbx_1) f/ zmm0_1.q
            zmm6.d = fconvert.s(zmm1)
            
            if (arg6[1].d != 0)
                int64_t* rcx_14 = *arg6
                
                if (rcx_14 != 0 && (*(*rcx_14 + 0x28))(rcx_14) != 0)
                    int64_t* rcx_15
                    
                    if (arg6[1].d == 0)
                        rcx_15 = nullptr
                    else
                        rcx_15 = *arg6
                    
                    zmm1 = zmm6.q
                    (*(*rcx_15 + 0x50))(rcx_15, zmm1)
            
            int64_t* rcx_16 = var_198
            i = (*(*rcx_16 + 0x30))(rcx_16, zmm1)
        while (i == 0)
        r12 = arg2
        r13 = &data_142d40450
        rdi = arg4
        rbx = rax_8
    
    j_sub_140a74f90(rbx)
    sub_140b39010(&var_148)
    sub_140b3da80(&var_148, &var_168)
    int64_t rcx_20 = var_168
    int32_t var_158
    uint64_t rdx_5 = zx.q(var_158)
    int64_t var_160
    
    if (rcx_20 != *arg3 || var_160 != arg3[1] || rdx_5.d != arg3[2].d)
        uint64_t rcx_21 = rcx_20 - *rdi
        
        if (rcx_20 == *rdi)
            rcx_21 = var_160 - rdi[1]
            
            if (var_160 == rdi[1])
                rcx_21 = rdx_5 - zx.q(rdi[2].d)
        
        rbx = nullptr
        
        if (rcx_21 == 0)
            rbx = 2
        
        if (rbx.b == 0)
            if (r12[1].d != 0)
                r13 = *r12
            
            sub_140b19e60()
            sub_140b1f700(&data_1439a8bd0, u"BuildDataGenerator: Verify failed on %s", r13)
    else
        rbx.b = 1
    
    int64_t* rcx_24 = var_198
    (*(*rcx_24 + 0x1b8))(rcx_24)
    sub_140b30ae0(&var_148)

if (arg6[1].d != 0)
    int64_t* rcx_26 = *arg6
    
    if (rcx_26 != 0 && (*(*rcx_26 + 0x28))(rcx_26) != 0)
        if (arg6[1].d != 0)
            r15 = *arg6
        
        arg5.o = 0x3f800000
        (*(*r15 + 0x50))(r15, arg5)

int64_t* rcx_28 = var_198

if (rcx_28 != 0)
    int64_t r8_6 = *rcx_28
    (*r8_6)(rcx_28, 1, r8_6)

sub_140745b20(arg6)
sub_140745b20(arg7)
sub_140745b20(arg8)
__security_check_cookie(rax_1 ^ &var_1b8)
return zx.q(rbx.b)
