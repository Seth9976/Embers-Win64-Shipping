// 函数: sub_14192d2b0
// 地址: 0x14192d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
int64_t* rbx = *result

if (rbx != 0)
    (*(*rbx + 0x48))(rbx)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    result = (*(*rbx + 0x48))(rbx)
    int64_t* result_1 = result
    
    if (result != 0)
        uint32_t arg_8 = zx.d(*(arg1[1] + 0x11))
        int32_t rax_3 = sub_14193c970(arg1[2], 1, &result_1, nullptr, &arg_8, nullptr)
        int32_t* rcx_4 = arg1[3]
        int32_t rbp_2 = rcx_4[3] - rcx_4[1]
        int32_t rsi_2 = rcx_4[2] - *rcx_4
        uint64_t* rcx_5 = arg1[4]
        int32_t rbx_2 = rbp_2 * rsi_2
        rcx_5[1].d = 0
        
        if (*(rcx_5 + 0xc) != rbx_2)
            sub_14061cd70(rcx_5, rbx_2)
        
        int64_t* rcx_6 = arg1[4]
        int32_t rax_4 = rcx_6[1].d + rbx_2
        rcx_6[1].d = rax_4
        
        if (rax_4 s> *(rcx_6 + 0xc))
            sub_140610660(rcx_6)
        
        data_143f000f8(0x8ca8, zx.q(rax_3))
        int64_t rcx_7 = 0x8ce0
        
        if (rax_3 == 0)
            rcx_7 = 0x405
        
        data_143effae0(rcx_7)
        data_143effac0(0xd05, 1)
        int32_t* rcx_8 = arg1[3]
        uint32_t* var_38_1
        var_38_1.d = 0x1908
        data_143effae8(zx.q(*rcx_8), zx.q(rcx_8[1]), zx.q(rsi_2), zx.q(rbp_2), var_38_1, 0x1406, 
            *arg1[4])
        data_143effac0(0xd05, 4)
        result = sub_14190d690(arg1[2], 1)
        result[0x31].d = 0xffffffff

return result
