// 函数: sub_141f87f60
// 地址: 0x141f87f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rbx << 3)) = arg1
int64_t* i = *(arg1 + 0xc8)

for (void* rbp = &i[sx.q(*(arg1 + 0xd0))]; i != rbp; i = &i[1])
    void* j = *i
    
    if (j != 0)
        void* rax_2 = sub_142492740()
        void* rdx_1 = *(j + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            int64_t* r15_1 = *arg2
            int64_t rsi_1 = sx.q(arg2[1].d)
            int64_t* rax_5 = r15_1
            void* rdx_2 = &r15_1[rsi_1]
            
            if (r15_1 != rdx_2)
                while (*rax_5 != j)
                    rax_5 = &rax_5[1]
                    
                    if (rax_5 == rdx_2)
                        goto label_141f88018
                
                if (r15_1 != 0)
                    sub_140a74f90(r15_1)
                
                return j
            
        label_141f88018:
            uint64_t var_28 = 0
            int32_t var_20_1 = rsi_1.d
            
            if (rsi_1.d != 0)
                sub_1405c4a00(&var_28, rsi_1.d, 0)
                memcpy(var_28, r15_1, (rsi_1 << 3).d)
            else
                int32_t var_1c_1 = 0
            
            void* rax_6 = sub_141f87f60(j, &var_28)
            
            if (rax_6 != 0)
                int64_t rcx_8 = *arg2
                
                if (rcx_8 == 0)
                    return rax_6
                
                sub_140a74f90(rcx_8)
                return rax_6

int64_t rcx_6 = *arg2

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return nullptr
