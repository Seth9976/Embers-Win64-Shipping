// 函数: sub_14104e6c0
// 地址: 0x14104e6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
void* r14

if (rcx != 0)
    r14 = (*(*rcx + 0x48))(rcx)
else
    r14 = nullptr

int64_t* rdx = *arg3
void* i

if (rdx != 0)
    void* i_1 = (*(*rdx + 0x48))(rdx)
    rdx = *arg3
    i = i_1
else
    i = nullptr

int64_t* result
int512_t zmm0
result, zmm0 = sub_1408c8cf0(r14 + 0x190, rdx)

if (r14 != 0)
    while (i != 0)
        sub_141059a80(r14 + 0x48, zmm0)
        *(r14 + 0x50) = 0
        __builtin_memset(r14 + 0x58, 0, 0x50)
        *(r14 + 0xa9) = 0xff
        memmove(r14 + 0x48, i + 0x48, 0x68)
        *(r14 + 0x50) = 5
        void* rax_4 = *(i + 0x58)
        *(i + 0x50) = 5
        *(rax_4 + 8) += 1
        sub_1405d16e0(r14 + 0xf0, *(i + 0xf0))
        void* rdi_1 = i + 0x118
        int64_t j_2 = 4
        void* rbx_1 = r14 + 0x118
        int64_t j
        
        do
            result, zmm0 = sub_1410407f0(rbx_1, *rdi_1)
            rbx_1 += 8
            rdi_1 += 8
            j = j_2
            j_2 -= 1
        while (j != 1)
        int32_t j_1 = 0
        
        if (*(i + 0x108) s> 0)
            int64_t rdi_2 = 0
            
            do
                void** rax_5 = *(i + 0x100)
                void** rdx_4 = i + 0xf8
                void* r8 = *(r14 + 0x100)
                void* rcx_7 = r14 + 0xf8
                
                if (rax_5 != 0)
                    rdx_4 = rax_5
                
                if (r8 != 0)
                    rcx_7 = r8
                
                result, zmm0 = sub_1410407f0(rcx_7 + (sx.q(j_1) << 3), *(rdx_4 + rdi_2))
                j_1 += 1
                rdi_2 += 8
            while (j_1 s< *(i + 0x108))
        
        r14 = *(r14 + 0xb8)
        i = *(i + 0xb8)
        
        if (r14 == 0)
            break

return result
