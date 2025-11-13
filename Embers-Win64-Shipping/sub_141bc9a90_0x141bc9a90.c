// 函数: sub_141bc9a90
// 地址: 0x141bc9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rcx = arg1[1].d
uint64_t result = zx.q(rcx u>> 5)

if ((result.b & 1) != 0 && ((rcx u>> 4).b & 1) == 0)
    void* rbx_1 = arg1[2]
    
    if (rbx_1 != 0)
        void* rax_1 = sub_141c1b420()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                *(rbx_1 + 0x390) = arg1
                void var_28
                sub_140b97b00(rbx_1 + 0x378, sub_140d21d60(&var_28, arg1))
                int64_t var_20
                
                if (var_20 != 0)
                    sub_140a74f90(var_20)
                
                sub_140d3a3a0(rbx_1 + 0x368, arg1)
                int32_t rax_3 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_3 = data_1439aaa30
                
                *(rbx_1 + 0x370) = rax_3
                int64_t* rcx_6 = *(rbx_1 + 0x390)
                
                if (rcx_6 != 0)
                    rcx_6 = sub_140d18150(rcx_6, rbx_1, 1)
                
                *(rbx_1 + 0x330) &= 0xfffffffb
                int64_t rax_4 = *(rbx_1 + 0x378)
                result = neg.q(rax_4)
                *(rbx_1 + 0x330) |= sbb.d(rcx_6.d, rcx_6.d, rax_4 != 0) & 4

return result
