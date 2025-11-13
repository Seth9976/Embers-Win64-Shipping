// 函数: sub_141fa9cb0
// 地址: 0x141fa9cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg3, 0)

int64_t r15 = sx.q(arg2[1].d)
int32_t rsi = 0
int64_t rdx = *arg2
int64_t rbx = 0
int64_t var_98 = rdx
char arg_10

if (r15 s> 0)
    do
        int64_t rax_1 = rbx * 5
        int32_t rcx_1 = rsi
        void* i = *(rdx + ((rax_1 + 4) << 3))
        int64_t* rdi_2 = rdx + ((rax_1 + 4) << 3)
        int32_t rax_2 = *(rdx + (rax_1 << 3))
        
        if (i == 0)
            int32_t var_84_3 = 0
        else
            void* rax_3 = sub_142527690()
            void* rdx_1 = *(i + 0x10)
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            void* const i_1
            
            if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                i_1 = nullptr
            else
                i_1 = i
            
            sub_140865c40(arg1 + 0xdc0, &arg_10, i_1)
            int64_t rax_6 = sx.q(arg_10.d)
            void* rax_8
            
            if (rax_6.d != 0xffffffff)
                rax_8 = *(arg1 + 0xdc0) + rax_6 * 0x18
            
            if (rax_6.d == 0xffffffff || rax_8 == 0 || rax_8 == -8)
                int64_t var_a8 = *(sub_140d21d80(i_1) + 0x18)
                int64_t var_80
                sub_140b63b70(&var_a8, &var_80)
                int64_t var_70
                sub_142441630(&var_70, &var_80)
                int64_t rcx_10 = var_80
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                void* rax_15 = sub_141fb32e0(arg1, &var_70)
                int64_t rcx_12 = var_70
                void* arg_20 = rax_15
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                    rax_15 = arg_20
                
                void* const i_2 = i_1
                void* var_58_1 = rax_15 + 0x10
                void** var_60 = &i_2
                void arg_18
                sub_1413b83d0(arg1 + 0xdc0, &arg_18, &var_60, nullptr)
                int32_t var_84_2 = *(arg_20 + 0x10) + 1
            else
                int32_t var_84_1 = *(*(arg1 + 0xd60) + sx.q(*(rax_8 + 8)) * 0x18 + 0x10) + 1
        
        if (rbx s< r15)
            while (*rdi_2 == i)
                rsi += 1
                rbx += 1
                rdi_2 = &rdi_2[5]
                
                if (rbx s>= r15)
                    break
        
        int64_t rdi_3 = sx.q(arg3[1].d)
        int32_t var_88_1 = rsi - rcx_1
        int32_t rax_20 = (rdi_3 + 1).d
        arg3[1].d = rax_20
        
        if (rax_20 s> *(arg3 + 0xc))
            sub_1405a4f90(arg3)
        
        rdx = var_98
        *(*arg3 + rdi_3 * 0x10) = rax_2.o
    while (rbx s< r15)

int32_t rdx_12 = arg3[1].d
uint64_t rcx_18 = *arg3
arg_10 = 0
return sub_141fa3a40(rcx_18, rdx_12, arg_10)
