// 函数: sub_1405c2180
// 地址: 0x1405c2180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) == 0)
    return 

void* rbx_1 = *(arg1 + 0x68)

if (rbx_1 != 0)
    int64_t rbx_2 = *(rbx_1 + 0x10)
    int64_t rax_1
    float zmm0_1
    rax_1, zmm0_1 = sub_1405c6e90()
    rax_1.b = rbx_2 == rax_1
    
    if (rax_1.b == 0)
        (*(*arg2 + 0x338))(arg2)
        (*(*arg2 + 0x338))(arg2)
        int32_t arg_24 = int.d(zmm0_1)
        void* rax_5 = sub_1425b6f00()
        void* rdx = arg2[2]
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            int32_t rbx_4 = 6
            int32_t arg_8 = 6
            void* rax_9 = sub_1425b3af0()
            void* rdx_1 = arg2[2]
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                void* rcx_4 = arg2[0x1a]
                int32_t rax_12
                
                if (rcx_4 == 0)
                    rax_12 = 0
                else
                    rax_12 = sub_1423c1990(rcx_4, 0)
                
                sub_1405be4b0(rax_12, &arg_8)
                rbx_4 = arg_8
            
            int32_t var_28_2 = rbx_4
        else
            uint32_t var_28_1 = zx.d(*(arg2 + 0xdb))
        
        sub_1405b36f0(arg1, arg2, arg3, int.d(zmm0_1))

sub_142131d00(*(arg1 + 0xa0), data_143cd6058, arg2)
