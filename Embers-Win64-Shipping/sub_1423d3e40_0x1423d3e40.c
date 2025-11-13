// 函数: sub_1423d3e40
// 地址: 0x1423d3e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142003490()
int64_t r15
r15.b = 0
data_143a2dff0:4.d += 1
int32_t rax = data_143a2dfe8.d
int32_t rcx = data_143a2dff0:4.d
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = data_143a2dfe0
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            r15.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                r15.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg1, arg2) == 0)
                r15.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = data_143a2dff0:4.d

uint64_t result = zx.q(rcx - 1)
data_143a2dff0:4.d = result.d

if (r15.b != 0)
    result = sub_140599630(&data_143a2dfe0, 0)

if (arg1 != 0)
    void* rcx_2 = *(arg1 + 0x188)
    
    if (rcx_2 != 0)
        int64_t* rcx_3 = *(rcx_2 + 0x48)
        
        if (rcx_3 != 0)
            jump(*(*rcx_3 + 0x270))
else if (arg2 != 0)
    int32_t rbx_3 = *(arg2 + 0x194)
    result = sub_140b5b8a0(*(arg2 + 0x190), 0x11b)
    int32_t rcx_4
    rcx_4.b = rbx_3 == 0
    
    if ((rcx_4.b & result.b) != 0)
        void* r8_3 = data_143f5b298
        result = *(r8_3 + 0xc38)
        int64_t rcx_6 = result + (sx.q(*(r8_3 + 0xc40)) << 3)
        uint64_t result_1
        
        if (result == rcx_6)
        label_1423d3f93:
            result = sub_1423d6f90(r8_3, 0)
            result_1 = result
        else
            while (true)
                result_1 = *result
                void* rdx_2 = *(result_1 + 0x1a0)
                
                if (rdx_2 != 0 && *(rdx_2 + 0x30) == arg2)
                    break
                
                result += 8
                
                if (result == rcx_6)
                    goto label_1423d3f93
        
        int64_t* rcx_9 = *(*(result_1 + 0x218) + 0x48)
        
        if (rcx_9 != 0)
            *(result_1 + 0x278)
            jump(*(*rcx_9 + 0x270))

return result
