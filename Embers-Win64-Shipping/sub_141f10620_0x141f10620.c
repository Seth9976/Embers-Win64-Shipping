// 函数: sub_141f10620
// 地址: 0x141f10620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x6a8))(arg1, arg3, 0)

if (rax_1 != 0 && (*(rax_1 + 0xd) & 2) != 0)
    int64_t* rdi_1
    int64_t* var_38
    int64_t* var_28
    
    if (arg2 != 0)
        sub_141f1a940(arg1 + 0x3dc, &var_38)
        int64_t* rcx_3 = var_38
        
        if (rcx_3 != 0)
            var_28 = arg1
            int64_t var_20_1 = arg3
            sub_1405a9f90(rcx_3, &var_28)
        
        int64_t* var_30
        rdi_1 = var_30
    else
        sub_141f1aaa0(arg1 + 0x3db, &var_28)
        int64_t* rcx_1 = var_28
        
        if (rcx_1 != 0)
            var_38 = arg1
            int64_t var_30_1 = arg3
            sub_1405a9f90(rcx_1, &var_38)
        
        int64_t* var_20
        rdi_1 = var_20
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t** i = arg1[0x1a]
int64_t result = sx.q(arg1[0x1b].d)

for (void* rbp = &i[result]; i != rbp; i = &i[1])
    int64_t* rsi_1 = *i
    
    if (rsi_1 != 0)
        void* rax_4 = sub_142577430()
        void* rdx_5 = rsi_1[2]
        result = sx.q(*(rax_4 + 0x38))
        
        if (result.d s<= *(rdx_5 + 0x38))
            int64_t result_1 = result
            result = *(rdx_5 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_4 + 0x30)
                result = (*(*rsi_1 + 0x6a8))(rsi_1, arg3, 0)
                
                if (result != 0 && *(result + 0xa0) == rax_1)
                    result = sub_141f10620(rsi_1, zx.q(arg2), arg3)

return result
