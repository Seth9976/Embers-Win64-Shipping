// 函数: sub_1422a2a60
// 地址: 0x1422a2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rbx << 3)) = arg1 + 0x2a8
int64_t rbx_1 = sx.q(arg3[1].d)
int32_t rax_1 = (rbx_1 + 1).d
arg3[1].d = rax_1

if (rax_1 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rbx_1 << 3)) = 0
int64_t** i = *(arg1 + 0xd0)
int64_t result = sx.q(*(arg1 + 0xd8))

for (void* rbp_1 = &i[result]; i != rbp_1; i = &i[1])
    int64_t* rbx_2 = *i
    
    if (rbx_2 != 0)
        void* rax_2 = sub_142577430()
        void* rdx_3 = rbx_2[2]
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            int64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_2 + 0x30)
                int64_t arg_8 = 0
                result = (*(*rbx_2 + 0x6a8))(rbx_2, 0, 0)
                
                if (result != 0)
                    if (*(result + 0xa0) != 0)
                        result = (*(*rbx_2 + 0x6f8))(rbx_2, arg2, arg3, zx.q(arg4))
                    else if (arg4 != 0 && *(result + 0xc) s< 0)
                        result = (*(*rbx_2 + 0x6f8))(rbx_2, arg2, arg3, zx.q(arg4))

return result
