// 函数: sub_140e5e850
// 地址: 0x140e5e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t* rcx_5

if (*(arg1 + 0x188) == *(arg1 + 0x1b4))
label_140e5e8ce:
    rcx_5 = nullptr
else
    void* rdx = *(arg1 + 0x1c0)
    void* r8 = arg1 + 0x1b8
    int64_t r9_1 = sx.q(*(arg3 + 0x50))
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0x1c8)) - 1) & r9_1) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140e5e8ce_1:
        rcx_5 = nullptr
    else
        while (true)
            rcx_5 = sx.q(rax_3) * 0x58 + *(arg1 + 0x180)
            
            if (*rcx_5 == r9_1.d)
                break
            
            rax_3 = rcx_5[0x14]
            
            if (rax_3 == 0xffffffff)
                goto label_140e5e8ce_2
        
        if (rax_3 == 0xffffffff)
        label_140e5e8ce_2:
            rcx_5 = nullptr

void* r10 = &rcx_5[2]

if (rcx_5 == 0)
    r10 = nullptr

if (r10 == 0)
    sub_140d947e0(arg2)
else
    float zmm0[0x4] = *(r10 + 0x20)
    float zmm1 = *(r10 + 0x24) f- *(arg3 + 0x1c)
    zmm0[0] = zmm0[0] f- *(arg3 + 0x18)
    zmm0[0] = zmm0[0] * zmm0[0]
    
    if (zmm1 * zmm1 + zmm0[0] <= arg4 * arg4)
        sub_140d947e0(arg2)
    else
        void var_188
        sub_140dbf000(r10, &var_188, 1, 0, zmm0, data_1439ae51c)
        void var_180
        int64_t* var_40
        void var_38
        
        if (sub_140db3500(&var_188) == 0)
            sub_140596d80(&var_38)
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp2_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            sub_140d94d20(&var_180)
            sub_140d947e0(arg2)
        else
            sub_140e86520(arg1 + 0x180)
            sub_140e52b70(arg2, &var_188)
            sub_140596d80(&var_38)
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp3_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int64_t r8_3 = *var_40
                        (*(r8_3 + 8))(var_40, 1, r8_3)
            
            sub_140d94d20(&var_180)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
