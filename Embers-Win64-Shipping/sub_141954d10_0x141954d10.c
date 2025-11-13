// 函数: sub_141954d10
// 地址: 0x141954d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1

if (data_143f00360 != 0 && data_1439c78e0 != 0)
    int64_t rax_2
    int32_t rcx_2
    
    if (data_143eff978 != 0)
        rax_2 = data_143eff980
        rcx_2 = data_143f01c54
    else
        int64_t rcx = sx.q(data_1439c74cc)
        int32_t rdx
        int32_t rbp_1
        
        if (0x400 - rcx.d s<= 1)
            memcpy(&data_143eff978, &data_143efcd00 + (rcx << 2), (0x400 - rcx.d) << 2)
            data_143effcf0(0x400, &data_143efcd00)
            rbp_1 = 1 - (0x400 - rcx.d)
            memcpy(&(&data_143eff978)[sx.q(0x400 - rcx.d)], &data_143efcd00, rbp_1 << 2)
            rdx = data_143eff978
        else
            rdx = *(&data_143efcd00 + (rcx << 2))
            rbp_1 = (rcx + 1).d
            data_143eff978 = rdx
        
        data_1439c74cc = rbp_1
        data_143effcd8(0x8f36, rdx)
        data_143f00360(0x8f36, 0x1000000, 0, 0xc2)
        rax_2 = data_143f00168(0x8f36, 0, 0x1000000, 0xc2)
        rcx_2 = 0x1000000
        data_143eff980 = rax_2
        data_143f01c54 = 0x1000000
    
    int32_t rdx_2 = data_143f01c58
    int32_t rax_3 = rax_2.d + rdx_2
    int32_t rbp_3 = not.d(arg4 - 1)
    int32_t rbx_4 = ((rax_3 + arg4 - 1) & rbp_3) - rax_3
    int32_t rdi_2 = rbx_4 + arg2
    
    if (rdi_2 u<= 0x400000 - data_143f01c50 && rdi_2 u<= rcx_2)
        if (rdi_2 u> 0x1000000 - rdx_2)
            int64_t* rax_5 = j_sub_140a82f30(0x18)
            *(rax_5 + 0xc) &= 0xff000000
            *(rax_5 + 0xf) = 0
            *rax_5 = 0
            rax_5[1].d = 0x1000000 - rdx_2
            rax_5[2].d = data_14399fa54
            int64_t rdi_3 = sx.q(data_143f01c18)
            int32_t rcx_4 = (rdi_3 + 1).d
            bool cond:2_1 = rcx_4 s<= data_143f01c1c
            data_143f01c18 = rcx_4
            
            if (not(cond:2_1))
                sub_1405a4d70(&data_143f01c10)
            
            int64_t rax_6 = data_143f01c10
            rcx_2 = data_143f01c54 - (0x1000000 - rdx_2)
            data_143f01c58 = 0
            data_143f01c54 = rcx_2
            *(rax_6 + (rdi_3 << 3)) = rax_5
            int32_t rax_7 = (data_143eff980).d
            rbx_4 = ((arg4 - 1 + rax_7) & rbp_3) - rax_7
            rdi_2 = rbx_4 + arg2
        
        if (rdi_2 u<= rcx_2)
            int64_t* rax_8 = j_sub_140a82f30(0x18)
            int64_t rcx_7 = zx.q(data_143f01c58) + data_143eff980
            int64_t* var_58 = rax_8
            *rax_8 = rcx_7
            int64_t* rdx_4 = var_58
            *(rdx_4 + 0xc) ^= (*(rdx_4 + 0xc) ^ arg3) & 0xffffff
            *(var_58 + 0xf) = rbx_4.b
            var_58[1].d = arg2
            var_58[2].d = 0xffffffff
            int64_t rbx_8 = sx.q(data_143f01c18)
            int32_t rax_15 = (rbx_8 + 1).d
            bool cond:3_1 = rax_15 s<= data_143f01c1c
            data_143f01c18 = rax_15
            
            if (not(cond:3_1))
                sub_1405a4d70(&data_143f01c10)
            
            *(data_143f01c10 + (rbx_8 << 3)) = var_58
            int64_t* var_50 = &arg_8
            int64_t** var_48_1 = &var_58
            void arg_20
            sub_1408d5f10(&data_1439c7940, &arg_20, &var_50, nullptr)
            int64_t* rcx_9 = var_58
            data_143f01c58 += rdi_2
            data_143f01c54 -= rdi_2
            data_143f01c50 += rdi_2
            return zx.q(*(rcx_9 + 0xf)) + *rcx_9

return 0
