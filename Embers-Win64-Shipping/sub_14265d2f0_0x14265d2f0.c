// 函数: sub_14265d2f0
// 地址: 0x14265d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    int64_t* rbx_1 = *(result + 0x120)
    
    if (rbx_1 != 0)
        void* rax = sub_14269bba0()
        void* rcx_1 = rbx_1[2]
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (result << 3)) == rax + 0x30
                && (rbx_1[0x73].b & 0xfb) == 0)
            if (rbx_1[0x6c].d s<= 0)
                int64_t rdx_1
                rdx_1.b = 1
                result = sub_14265d3f0(rbx_1, rdx_1.b)
            
            if (rbx_1[0x6c].d s> 0 || result.b != 0)
                result.b = 1
                return result

result.b = 0
return result
