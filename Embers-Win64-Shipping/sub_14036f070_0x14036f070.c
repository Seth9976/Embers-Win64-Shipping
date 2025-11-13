// 函数: sub_14036f070
// 地址: 0x14036f070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_14036f6a0(arg1)

if (rax == 0)
    void* rdi_1 = *(arg1 + 0x28)
    *(rdi_1 + 0x58) = *(rdi_1 + 0x44) * 2
    *(*(rdi_1 + 0x68) + (zx.q(*(rdi_1 + 0x74) - 1) << 1)) = 0
    memset(*(rdi_1 + 0x68), 0, zx.q(*(rdi_1 + 0x74) - 1) * 2)
    int64_t rax_5 = sx.q(*(rdi_1 + 0xac)) << 4
    *(rdi_1 + 0xa8) = zx.d(*(rax_5 + 0x1435f8b02))
    *(rdi_1 + 0xb4) = zx.d(*(rax_5 + &data_1435f8b00))
    *(rdi_1 + 0xb8) = zx.d(*(rax_5 + 0x1435f8b04))
    *(rdi_1 + 0xa4) = zx.d(*(rax_5 + 0x1435f8b06))
    *(rdi_1 + 0x84) = 0x200000000
    *(rdi_1 + 0x9c) = 0x200000000
    *(rdi_1 + 0x170c) = 0
    *(rdi_1 + 0x90) = 0
    *(rdi_1 + 0x70) = 0

return zx.q(rax)
