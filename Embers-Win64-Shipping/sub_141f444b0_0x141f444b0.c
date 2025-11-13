// 函数: sub_141f444b0
// 地址: 0x141f444b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int512_t zmm3
result, zmm3 = sub_141f477c0(arg1, 1)
int64_t* rbx = arg1[0xca]

if (rbx != 0)
    void* rax = sub_142469550()
    void* rcx = rbx[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38))
        int64_t* result_1 = result
        result = *(rcx + 0x30)
        
        if (result[result_1] == rax + 0x30)
            zmm3.o = 0x3f800000
            (*(*rbx + 0x318))(rbx, arg2, 0, zmm3)
            result = sub_141e498b0(rbx, 0)

int64_t* rbx_1 = arg1[0xca]

if (rbx_1 != 0)
    void* rax_2 = sub_142469550()
    void* rcx_3 = rbx_1[2]
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s<= *(rcx_3 + 0x38))
        int64_t* result_2 = result
        result = *(rcx_3 + 0x30)
        
        if (result[result_2] == rax_2 + 0x30)
            result_2.b = 1
            sub_141e498b0(rbx_1, result_2.b)
            return sub_141e49620(rbx_1, arg3)

return result
