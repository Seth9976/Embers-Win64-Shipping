// 函数: sub_14233e9d0
// 地址: 0x14233e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t var_f4
int32_t var_f4_1 = var_f4 & 0xffffff00
int64_t var_1a0 = 0
int512_t zmm1
zmm1.o = zx.o(0)
int64_t var_198 = 0
char var_188 = 0
int64_t var_180
__builtin_memset(&var_180, 0, 0x88)
char var_1a8 = 1
int32_t var_f8 = 0x20702
sub_1405979f0(arg1 + 0x10, &var_1a8)
sub_140597700(&var_1a8)

if (*(arg3 + 4) != sub_140e69970(data_143e29f28, zmm1))
    sub_140596b00(arg2, arg1 + 0x10)
else
    int64_t* rcx_3 = *(arg1 - 0x98)
    
    if (rcx_3 != 0)
        int64_t r8 = *rcx_3
        void* rdx_1 = arg1 - 0xc8
        
        if (arg1 == 0xd0)
            rdx_1 = nullptr
        
        (*(r8 + 0xd0))(rcx_3, rdx_1, r8)
    
    uint8_t var_1d8
    sub_140e679c0(data_143e29f28, &var_1d8)
    uint8_t rbx_2 = var_1d8 u>> 4 & 1
    int32_t var_1c8
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    int64_t* var_1c0
    *var_1c0 = data_143e1e890
    var_1c0[1] = data_143e1e898
    void* rax_6 = data_143e1e8a0
    var_1c0[2] = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1
    
    var_1c0[3].b = rbx_2
    var_1c0[4].d = 0xffffffff
    int64_t rbx_3 = *var_1c0
    int64_t var_1b8
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_5 = var_1d8 u>> 5 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e8a8
    var_1c0[1] = data_143e1e8b0
    void* rax_11 = data_143e1e8b8
    var_1c0[2] = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
    
    var_1c0[3].b = rbx_5
    var_1c0[4].d = 0xffffffff
    int64_t rbx_6 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_6 u>> 0x20).d + sub_140b5ead0(rbx_6.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_8 = var_1d8 u>> 2 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e860
    var_1c0[1] = data_143e1e868
    void* rax_16 = data_143e1e870
    var_1c0[2] = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    var_1c0[3].b = rbx_8
    var_1c0[4].d = 0xffffffff
    int64_t rbx_9 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_9 u>> 0x20).d + sub_140b5ead0(rbx_9.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_11 = var_1d8 u>> 3 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e878
    var_1c0[1] = data_143e1e880
    void* rax_21 = data_143e1e888
    var_1c0[2] = rax_21
    
    if (rax_21 != 0)
        *(rax_21 + 8) += 1
    
    var_1c0[3].b = rbx_11
    var_1c0[4].d = 0xffffffff
    int64_t rbx_12 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_12 u>> 0x20).d + sub_140b5ead0(rbx_12.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_14 = var_1d8 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e830
    var_1c0[1] = data_143e1e838
    void* rax_26 = data_143e1e840
    var_1c0[2] = rax_26
    
    if (rax_26 != 0)
        *(rax_26 + 8) += 1
    
    var_1c0[3].b = rbx_14
    var_1c0[4].d = 0xffffffff
    int64_t rbx_15 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_15 u>> 0x20).d + sub_140b5ead0(rbx_15.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_17 = var_1d8 u>> 1 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e848
    var_1c0[1] = data_143e1e850
    void* rax_31 = data_143e1e858
    var_1c0[2] = rax_31
    
    if (rax_31 != 0)
        *(rax_31 + 8) += 1
    
    var_1c0[3].b = rbx_17
    var_1c0[4].d = 0xffffffff
    int64_t rbx_18 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_18 u>> 0x20).d + sub_140b5ead0(rbx_18.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_20 = var_1d8 u>> 6 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e8c0
    var_1c0[1] = data_143e1e8c8
    void* rax_36 = data_143e1e8d0
    var_1c0[2] = rax_36
    
    if (rax_36 != 0)
        *(rax_36 + 8) += 1
    
    var_1c0[3].b = rbx_20
    var_1c0[4].d = 0xffffffff
    int64_t rbx_21 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_21 u>> 0x20).d + sub_140b5ead0(rbx_21.d), var_1c0, 
        var_1c8, nullptr)
    uint8_t rbx_23 = var_1d8 u>> 7 & 1
    sub_140a3ef70(arg1 + 0xc8, &var_1c8)
    *var_1c0 = data_143e1e8d8
    var_1c0[1] = data_143e1e8e0
    void* rax_41 = data_143e1e8e8
    var_1c0[2] = rax_41
    
    if (rax_41 != 0)
        *(rax_41 + 8) += 1
    
    var_1c0[3].b = rbx_23
    var_1c0[4].d = 0xffffffff
    int64_t rbx_24 = *var_1c0
    sub_1423345e0(arg1 + 0xc8, &var_1b8, (rbx_24 u>> 0x20).d + sub_140b5ead0(rbx_24.d), var_1c0, 
        var_1c8, nullptr)
    int64_t* rcx_29 = *(arg1 - 0x98)
    int64_t* rsi_2 = data_143e29f28
    char rax_45
    char rax_47
    
    if (rcx_29 != 0)
        rax_45 = (*(*rcx_29 + 0x180))(rcx_29)
        
        if (rax_45 != 1)
            int64_t* rcx_30 = *(arg1 - 0x98)
            rax_47 = (*(*rcx_30 + 0x180))(rcx_30)
    
    uint32_t rbx_25
    
    if (rcx_29 == 0 || (rax_45 != 1 && rax_47 != 2))
        rbx_25.b = 0
    else
        rbx_25.b = 1
    
    if ((*(*rsi_2 + 8))(rsi_2) == 0 || rbx_25.b == 0)
        sub_140596b00(arg2, arg1 + 0x10)
    else
        int64_t* rcx_32 = *(arg1 - 0x98)
        
        if ((*(*rcx_32 + 0x178))(rcx_32) != 0)
            sub_140596b00(arg2, arg1 + 0x10)
        else
            int64_t* rbx_26 = *(arg1 + 0x188)
            var_1c8.q = 0
            int64_t* var_1c0_1 = rbx_26
            
            if (rbx_26 != 0)
                int32_t rax_52 = rbx_26[1].d
                
                if (rax_52 == 0)
                    rbx_26 = nullptr
                    int64_t var_1c0_2 = 0
                else
                    rbx_26[1].d = rax_52 + 1
                    var_1c8.q = *(arg1 + 0x180)
            
            sub_140d947e0(&var_1a8)
            uint128_t zmm0_1 = var_1c8.o
            var_1c8.o = zmm0_1
            
            if (rbx_26 != 0)
                rbx_26[1].d += 1
            
            sub_140e649d0(rsi_2, &var_1c8, &var_1a8, data_1439ae51c, zmm0_1)
            int64_t rcx_36 = *(*(*(arg1 - 0xc8) + 0x18))(arg1 - 0xc8, &var_1c8)
            var_1b8 = rcx_36
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rcx_36.d)
            var_1b8.d = (temp1_1 - temp0_1) s>> 1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_1b8:4.d)
            var_1b8:4.d = (temp3_1 - temp2_1) s>> 1
            sub_14232f2c0(arg1 - 0xd0, arg2, var_1b8, 0)
            sub_140de0810(&var_1a8)
            
            if (rbx_26 != 0)
                rbx_26[1].d -= 1
                
                if (rbx_26[1].d == 1)
                    int64_t rdx_24 = *rbx_26
                    (*rdx_24)(rbx_26, rdx_24)
                    int32_t temp5_1 = *(rbx_26 + 0xc)
                    *(rbx_26 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        int64_t r8_11 = *rbx_26
                        (*(r8_11 + 8))(rbx_26, 1, r8_11)

__security_check_cookie(rax_1 ^ &var_208)
return arg2
