// 函数: sub_140a6af60
// 地址: 0x140a6af60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
char* rdi = arg1

if (arg2 u<= 0x18)
    if (rsi.d u> 0xc)
        return sub_140a7da30(arg1, rsi.d)
    
    int32_t rax
    uint32_t rdx
    int32_t r8_1
    
    if (rsi.d u> 4)
        uint32_t r10_1 = (rsi * 5).d
        rdx = (rol.d((rol.d((*arg1 + rsi.d) * 0xcc9e2d51, 0xf) * 0x1b873593) ^ r10_1, 0xd)
            - 0x52250ec) * 5
        rax = *((zx.q((rsi u>> 1).d) & 4) + rdi) + 9
        r8_1 = rol.d((*(rsi + rdi - 4) + r10_1) * 0xcc9e2d51, 0xf) * 0x1b873593
    else
        rax = 0
        r8_1 = 9
        
        if (arg2 != 0)
            uint64_t i_2 = zx.q(rsi.d)
            uint64_t i
            
            do
                int32_t rax_1 = sx.d(*rdi)
                rdi = &rdi[1]
                rax = rax_1 - rax * 0x3361d2af
                r8_1 ^= rax
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        rdx = rol.d(rsi.d * 0xcc9e2d51, 0xf) * 0x1b873593
    
    uint32_t rax_15 = (rol.d(
        (rol.d(rax * 0xcc9e2d51, 0xf) * 0x1b873593) ^ ((rol.d(r8_1 ^ rdx, 0xd) - 0x52250ec) * 5), 
        0xd) - 0x52250ec) * 5
    int32_t rax_16 = (rax_15 u>> 0x10 ^ rax_15) * 0x85ebca6b
    int32_t rax_17 = (rax_16 u>> 0xd ^ rax_16) * 0xc2b2ae35
    return zx.q(rax_17 u>> 0x10) ^ zx.q(rax_17)

int32_t rbx = rsi.d * 0xcc9e2d51
uint64_t rdx_5 = zx.q(rol.d(
    ((rol.d((rol.d(*(rsi + arg1 - 4) * 0xcc9e2d51, 0xf) * 0x1b873593) ^ rsi.d, 0xd) - 0x52250ec)
        * 5) ^ (rol.d(*(rsi + rdi - 0x10) * 0xcc9e2d51, 0xf) * 0x1b873593), 
    0xd) - 0x52250ec)
uint32_t rbp = (rdx_5 * 5).d
uint64_t rdx_9 = zx.q(rol.d(
    ((rol.d((rol.d(*(rsi + rdi - 8) * 0xcc9e2d51, 0xf) * 0x1b873593) ^ rbx, 0xd) - 0x52250ec) * 5)
        ^ (rol.d(*(rsi + rdi - 0xc) * 0xcc9e2d51, 0xf) * 0x1b873593), 
    0xd) - 0x52250ec)
uint32_t r14 = (rdx_9 * 5).d
uint32_t r11 =
    (rol.d(rol.d(*(rsi + rdi - 0x14) * 0xcc9e2d51, 0xf) * 0x1b873593 + rbx, 0xd) - 0x52250ec) * 5
uint32_t i_3 = (rsi - 1).d u/ 0x14
void* rdi_1 = &rdi[8]
uint32_t r10_3
uint32_t temp0_1
uint32_t i_1

do
    int32_t rax_33 = *(rdi_1 - 8) * 0xcc9e2d51
    int32_t rdx_11 = *(rdi_1 - 4)
    rdi_1 += 0x14
    int32_t r8_7 = rol.d(rax_33, 0xf) * 0x1b873593
    int32_t r8_9 = rol.d(r8_7 ^ rbp, 0xe)
    r10_3 = r8_7 - rol.d(rdx_11 + r11, 0xd) * 0x3361d2af
    rbp = r10_3
    int32_t rax_43 = rol.d(*(rdi_1 - 0x14) * 0xcc9e2d51, 0xf) * 0x1b873593
    temp0_1 = _bswap((rol.d(
        (rdx_11 + rol.d(*(rdi_1 - 0x10) * 0xcc9e2d51, 0xf) * 0x1b873593)
            ^ ((r8_9 - 0x52250ec) * 5), 
        0xd) - 0x52250ec + *(rdi_1 - 0xc)) * 5)
    int32_t rax_44 = rax_43 + r14
    r14 = temp0_1
    r11 = (zx.q(_bswap(((rol.d(rax_44, 0xe) - 0x52250ec) * 5) ^ *(rdi_1 - 0xc))) * 5).d
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return zx.q(rol.d(
    rol.d(
        (rol.d(
            (rol.d(r10_3 - rol.d(ror.d(temp0_1, 0xb) * 0xcc9e2d51, 0xf) * 0x3361d2af, 0xd)
                - 0x52250ec) * 5, 
            0xf) + rol.d(ror.d(r11, 0xb) * 0xcc9e2d51, 0xf)) * 0xcc9e2d51, 
        0xd) * 5 - 0x19ab949c, 
    0xf) * 0xcc9e2d51)
