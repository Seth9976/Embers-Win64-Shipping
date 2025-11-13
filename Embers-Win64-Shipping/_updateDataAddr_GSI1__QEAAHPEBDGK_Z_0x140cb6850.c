// 函数: ?updateDataAddr@GSI1@@QEAAHPEBDGK@Z
// 地址: 0x140cb6850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rbp = 0
int32_t var_d8 = 0
int32_t r14 = 0
int32_t result_1 = 1

if (*(arg1 + 0x2d8) != 0 || *(arg1 + 0x295) != 0)
    goto label_140cb6c12

int64_t rbx_2 = *(*(arg1 + 0xa0) + 0x18)
var_d8.q = rbx_2
int64_t rcx
int64_t rdx
void* r8_1
rcx, rdx, r8_1 = sub_140d212c0()
int64_t rsi_1 = -1
int32_t rax_6

if (data_1439aace8 != data_1439aad14)
    int32_t var_d4
    int32_t rax_4 = sub_140b5ead0(rbx_2.d) + var_d4
    r8_1 = &data_1439aad18
    rcx = data_1439aad20
    rdx = (sx.q(data_1439aad28) - 1) & sx.q(rax_4)
    
    if (rcx != 0)
        r8_1 = rcx
    
    rax_6 = *(r8_1 + (rdx << 2))

if (data_1439aace8 == data_1439aad14 || rax_6 == 0xffffffff)
label_140cb6916:
    rax_6 = -1
else
    r8_1 = data_1439aace0
    
    while (true)
        rdx = sx.q(rax_6) * 3
        
        if (*(r8_1 + (rdx << 3)) == rbx_2)
            break
        
        rax_6 = *(r8_1 + (rdx << 3) + 0x10)
        
        if (rax_6 == 0xffffffff)
            goto label_140cb6916

rcx.b = rax_6 != 0xffffffff
*(arg1 + 0x295) = rcx.b
uint64_t result
int32_t var_e8

if (rax_6 == 0xffffffff)
    void*** rax_7 = j_sub_140a82f30(0x220)
    int16_t* const rbx_3 = &data_142d40450
    int64_t var_c8
    int128_t* var_b8
    int128_t var_a8
    int64_t (* var_88)()
    int64_t* var_78
    void** const var_68
    void*** rax_9
    
    if (rax_7 == 0)
        rax_9 = nullptr
    else
        int64_t* r9_1
        
        if (data_143de5452 == 0)
            var_78 = nullptr
            var_68 = &data_142d42d18
            r9_1 = &var_88
            r14 = 2
            var_88 = sub_140594850
        else
            int64_t rcx_3 = *arg2
            int128_t* rax_8 = arg2[2]
            arg2[2] = 0
            var_c8 = rcx_3
            var_b8 = rax_8
            int128_t zmm1 = *(arg2 + 0x30)
            var_a8 = *(arg2 + 0x20)
            int128_t var_98_1 = zmm1
            
            if (rcx_3 != 0)
                *arg2 = 0
            
            r9_1 = &var_c8
            r14 = 1
        
        if (*(arg1 + 0x1e8) == 0)
            rax_9 = sub_140b93e30(rax_7, &data_142d40450, arg1, r9_1, arg3, arg4)
        else
            rax_9 = sub_140b93e30(rax_7, *(arg1 + 0x1e0), arg1, r9_1, arg3, arg4)
    
    *(arg1 + 0x2d8) = rax_9
    
    if ((r14.b & 2) != 0)
        r14 &= 0xfffffffd
        
        if (var_88 != 0)
            int64_t* rcx_6 = &var_68
            
            if (var_78 != 0)
                rcx_6 = var_78
            
            (*(*rcx_6 + 0x10))(rcx_6)
    
    if ((1 & r14.b) != 0 && var_c8 != 0)
        int128_t* rcx_7 = &var_a8
        
        if (var_b8 != 0)
            rcx_7 = var_b8
        
        (*(*rcx_7 + 0x10))(rcx_7)
    
    void* rax_14 = *(arg1 + 0x2d8)
    
    if (rax_14 == 0)
        result = 0
    else
        if ((*(rax_14 + 0x29) & 1) == 0)
            *(arg1 + 0x208) = *(rax_14 + 8)
            int16_t* rcx_8
            
            if (*(arg1 + 0x1e8) == 0)
                rcx_8 = &data_142d40450
            else
                rcx_8 = *(arg1 + 0x1e0)
            
            char rax_16 = sub_140b3d910(rcx_8, nullptr, 1)
            
            if ((*(arg1 + 0x290) & 0x8000) != 0 || rax_16 != 0)
                int64_t* rcx_9 = *(arg1 + 0x2d8)
                int32_t rax_18 = (*(*rcx_9 + 0x28))(rcx_9)
                uint64_t r12_1 = zx.q(rax_18)
                int64_t rax_19 = sub_140a82f30(zx.q(rax_18), 0)
                int64_t* rcx_11 = *(arg1 + 0x2d8)
                (*(*rcx_11 + 0x150))(rcx_11, rax_19, zx.q(r12_1.d))
                sub_140cb7040(arg1)
                
                if (rax_16 == 0)
                    void*** rax_23 = j_sub_140a82f30(0xb0)
                    void*** rbx_4 = rax_23
                    
                    if (rax_23 == 0)
                        rbx_4 = nullptr
                    else
                        var_e8.b = 1
                        sub_140cacd50(rax_23, rax_19, r12_1, 1, var_e8.b)
                        *rbx_4 = &data_142d847a8
                    
                    *(arg1 + 0x2d8) = rbx_4
                else
                    void*** rax_21 = j_sub_140a82f30(0xc8)
                    
                    if (rax_21 == 0)
                        *(arg1 + 0x2d8) = 0
                    else
                        if (*(arg1 + 0x1e8) != 0)
                            rbx_3 = *(arg1 + 0x1e0)
                        
                        var_e8.b = 1
                        sub_140cacd50(rax_21, rax_19, r12_1, 1, var_e8.b)
                        *rax_21 = &data_142e75590
                        rax_21[0x16] = 0
                        rax_21[0x17] = 0
                        
                        if (rbx_3 != 0 && *rbx_3 != 0)
                            do
                                rsi_1 += 1
                            while (rbx_3[rsi_1] != 0)
                            
                            if (rsi_1.d + 1 s> 0)
                                sub_1405947f0(&rax_21[0x16], rsi_1.d + 1)
                                rbp = rax_21[0x17].d
                            
                            int32_t rax_22 = rsi_1.d + 1 + rbp
                            rax_21[0x17].d = rax_22
                            
                            if (rax_22 s> *(rax_21 + 0xbc))
                                sub_140594770(&rax_21[0x16])
                            
                            UnDecorator::getReferenceType(rax_21[0x16], rbx_3, (rsi_1.d + 1) * 2)
                        
                        rax_21[0x18].b = 0
                        *(arg1 + 0x2d8) = rax_21
                
                result_1 = 1
            else
                *(arg1 + 0x2a2) = 1
            
            goto label_140cb6c05
        
        sub_140cb7040(arg1)
        result = 0
else
    sub_140b9e970(arg1, rdx.d, r8_1.d)
label_140cb6c05:
    sub_140ccf2c0(arg1, *(arg1 + 0x2d8))
    sub_140ccde30(arg1)
label_140cb6c12:
    
    if (data_143de5452 != 0)
        result = 2
    else if (*(arg1 + 0x324) != 0)
    label_140cb6cbc:
        
        if (sub_140cc1900(arg1, u"creating loader", 1) == 0)
            result = zx.q(result_1)
        else
            result = 2
    else
        int64_t* rcx_20 = *(arg1 + 0x2d8)
        char rax_24
        
        if (*(arg1 + 0x2a2) == 0)
            uint64_t rax_26 = (*(*rcx_20 + 0x28))(rcx_20)
            uint64_t rdx_12 = rax_26
            
            if (rax_26 s> 0)
                int64_t rax_27 = data_1439a9f10
                int64_t* rcx_22 = *(arg1 + 0x2d8)
                
                if (rax_27 s<= rdx_12)
                    rdx_12 = zx.q(rax_27.d)
                
                int64_t r9_4 = *rcx_22
                rax_24 = (*(r9_4 + 0x198))(rcx_22, 0, sx.q(rdx_12.d), r9_4, var_e8)
                goto label_140cb6cab
            
            sub_140cb7040(arg1)
            result = 0
        else
            rax_24 = sub_140bb43d0(rcx_20, *(arg1 + 0x32c), *(arg1 + 0x32d), zx.o(*(arg1 + 0x338)), 
                *(arg1 + 0x334))
        label_140cb6cab:
            
            if (rax_24 != 0)
                goto label_140cb6cbc
            
            result = 2
__security_check_cookie(rax_1 ^ &var_108)
return result
