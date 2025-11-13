// 函数: sub_14075a0d0
// 地址: 0x14075a0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t i = 0
int32_t* rdi = *(arg1 + 0x188)
int64_t rsi = 0
uint64_t result = &rdi[sx.q(*(arg1 + 0x190))]
uint64_t rbp_1 = sx.q(*(arg1 + 0x190)) << 2 u>> 2

if (rdi u> result)
    rbp_1 = 0

if (rbp_1 != 0)
    do
        result = *(arg1 + 0x178)
        int64_t* rbx_1 = *(result + (sx.q(*rdi) << 3))
        
        if (rbx_1 != 0)
            if (*(rbx_1 + 0xa4) != 1)
                result = (*(*rbx_1 + 0x28))(rbx_1, arg2, arg3, zx.q(arg_20), arg5, arg1)
            else
                result = sub_14076f990((*U"1111")[sx.q(sub_1422e48a0(arg3))])
                
                if (result.b != 0 && data_14396e8c8 != 0 && data_14396e8e0 != 0
                        && data_1439c7a0d != 0)
                    result = (*(*rbx_1 + 0x28))(rbx_1, arg2, arg3, zx.q(arg_20), arg5, arg1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != rbp_1)
    
    arg4 = arg_20
    i = 0

if ((*(arg3 + 0x2c) & 2) != 0 && *(arg2 + 8) s> 0)
    int32_t rbx_2 = 1
    int64_t rbp_2 = 0
    
    do
        if ((arg4 & rbx_2) != 0)
            int64_t* rsi_2 = arg5 + 0x50
            int64_t* rdi_1 = rsi_2[2]
            result = sub_14076deb0(arg1)
            void* var_38
            var_38.b = result.b
            
            if (rdi_1 != 0)
                rsi_2 = rdi_1
            
            *(rsi_2 + rbp_2)
            arg4 = arg_20
        
        i += 1
        rbx_2 = rol.d(rbx_2, 1)
        rbp_2 += 8
    while (i s< *(arg2 + 8))

return result
