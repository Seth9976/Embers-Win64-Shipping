// 函数: sub_140cc4100
// 地址: 0x140cc4100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(*arg2 + 8)
uint64_t result = zx.q(rsi[5].b)
int128_t var_68

if ((result.b & 2) != 0 || *(rsi + 0x2a) s< 0)
    EnterCriticalSection(&data_1439a9e58)
    int128_t zmm0
    
    if (arg1 == data_1439a9e80)
        zmm0 = data_1439a9e88.o
    else
        data_1439a9e80 = arg1
        int32_t var_40
        sub_1405ba560(&data_1439a9e08, &var_40, arg1)
        int64_t rax_10 = sx.q(var_40)
        void* const rcx_16
        
        if (rax_10.d == 0xffffffff)
            rcx_16 = nullptr
        else
            rcx_16 = (rax_10 << 5) + data_1439a9e08
        
        int128_t* rax_11 = rcx_16 + 8
        
        if (rcx_16 == 0)
            rax_11 = nullptr
        
        if (rax_11 == 0)
            int64_t var_34_1 = 0
            zmm0 = 0.o
            data_1439a9e88.o = zmm0
        else
            zmm0 = *rax_11
            data_1439a9e88.o = zmm0
    
    var_68 = zmm0
    LeaveCriticalSection(&data_1439a9e58)
    int64_t* r9_4 = *(*arg2 + 8)
    uint64_t* r8_6 = r9_4[1]
    uint64_t rdx_14 = *r8_6
    int32_t rcx_20
    bool cond:1_1
    
    if (rdx_14 + 4 u> r8_6[1])
        int64_t rax_14 = *r9_4
        int32_t rdi_1
        rdi_1.b = (var_68.d | var_68:4.d | var_68:8.d | var_68:0xc.d) != 0
        int32_t var_44 = rdi_1
        result, rcx_20 = (*(rax_14 + 0x150))(r9_4, &var_44, 4)
        cond:1_1 = var_44 != 0
    else
        cond:1_1 = *rdx_14 != 0
        result = rdx_14 + 4
        *r8_6 = result
    
    rcx_20.b = cond:1_1
    
    if (rcx_20.b != 0)
        if ((rsi[6].d & 0x400000) != 0)
            int128_t* rax_21
            rax_21, arg3 = sub_140caa760(sx.q(data_14399fa48 s% 0xa) * 0x50 + &data_143e1aeb0, 
                sub_140a6b260(&var_68, 0x10), &var_68)
            int128_t zmm0_2
            
            if ((*(rax_21 + 0xc) | *(rax_21 + 8) | *(rax_21 + 4) | *rax_21) != 0)
                zmm0_2 = *rax_21
            else
                void var_2c
                zmm0_2 = *sub_140b214c0(&var_2c)
                *rax_21 = zmm0_2
            
            var_68 = zmm0_2
        
        return sub_140b0c350(arg2, &var_68, arg3)
else if ((result.b & 1) != 0)
    int64_t* rdx = rsi[1]
    int64_t rcx = *rdx
    bool cond:3_1
    
    if (rcx + 4 u> rdx[1])
        int64_t rax_2 = *rsi
        int32_t var_48 = 0
        result = (*(rax_2 + 0x150))(rsi, &var_48, 4)
        cond:3_1 = var_48 != 0
    else
        cond:3_1 = *rcx != 0
        result = rcx + 4
        *rdx = result
    
    if (cond:3_1 != 0)
        int64_t var_58 = 0
        int64_t var_50_1 = 0
        sub_140b0c350(arg2, &var_58, arg3)
        result = sub_140d21d80(arg1)
        
        if (((*(result + 0x50) u>> 5).b & 1) == 0)
            result = zx.q(rsi[6].d) & 0x401000
            
            if (result.d != 0x1000)
                EnterCriticalSection(&data_1439a9ee8)
                void* rbx_2
                
                if (data_1439a9ea0.d == data_1439a9ecc)
                labelid_c:
                    rbx_2 = nullptr
                else
                    int32_t rax_5 = sub_140a6b260(&var_58, 0x10)
                    void* rcx_7 = data_1439a9ed8
                    void* rax_7 = &data_1439a9ed0
                    
                    if (rcx_7 != 0)
                        rax_7 = rcx_7
                    
                    int32_t rax_8 = *(rax_7 + (((sx.q(data_1439a9ee0) - 1) & sx.q(rax_5)) << 2))
                    
                    if (rax_8 == 0xffffffff)
                    label_140cc4277:
                        rbx_2 = nullptr
                    else
                        int64_t r10_1 = data_1439a9e98
                        int64_t r9_1
                        
                        while (true)
                            r9_1 = sx.q(rax_8)
                            int32_t* r8_3 = (r9_1 << 5) + r10_1
                            
                            if (((r8_3[1] ^ var_58:4.d) | (r8_3[2] ^ var_50_1.d)
                                    | (r8_3[3] ^ var_50_1:4.d) | (*r8_3 ^ var_58.d)) == 0)
                                break
                            
                            rax_8 = r8_3[6]
                            
                            if (rax_8 == 0xffffffff)
                                goto label_140cc4277_2
                        
                        if (rax_8 == 0xffffffff)
                        label_140cc4277_1:
                            rbx_2 = nullptr
                        else
                            int64_t r9_2 = r9_1 << 5
                            
                            if (r9_2 == neg.q(r10_1))
                            label_140cc4277_2:
                                rbx_2 = nullptr
                            else
                                rbx_2 = *(r9_2 + r10_1 + 0x10)
                
                result = LeaveCriticalSection(&data_1439a9ee8)
                
                if (rbx_2 != arg1)
                    sub_140af2b60()
                    result = sub_140b21a10(&data_143dbb3f0, u"AssignNewMapGuids")
                    
                    if (result.b != 0)
                    label_140cc4308:
                        var_68.q = 0
                        var_68:8.q = 0
                        var_58.o = var_68
                        data_1439a9d84 += 1
                    else if (rbx_2 == 0)
                        result = sub_140ca9950(&data_1439a9e00, arg1, &var_58)
                        data_1439a9d84 += 1
                    else
                        result = zx.q(*(rbx_2 + 8) u>> 0xe)
                        
                        if ((result.b & 1) == 0)
                            goto label_140cc4308
                        
                        sub_140ccdbb0(&data_1439a9e00, rbx_2)
                        result = sub_140ca9950(&data_1439a9e00, arg1, &var_58)
                        data_1439a9d84 += 1
return result
