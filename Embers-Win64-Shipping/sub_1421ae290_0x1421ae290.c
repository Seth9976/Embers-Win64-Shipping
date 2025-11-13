// 函数: sub_1421ae290
// 地址: 0x1421ae290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x2a0)

if (rbx != 0)
    sub_1421af750(rbx)
    sub_1421c06e0(rbx, arg1 + 0x2b0)
    return sub_1419981a0(rbx) __tailcall

if (data_143a2ecfc != rbx.d && data_1439c7a6a != rbx.b && data_1439c7a18 != rbx.b
        && data_1439c88a8 != rbx.b && data_1439c7a17 != rbx.b && data_1439c7a0c != rbx.b)
    void*** rax_2 = j_sub_140a82f30(0x220)
    
    if (rax_2 != 0)
        rbx = sub_1421a9090(rax_2)
    
    rbx[0x42].d += 1
    sub_1421c06e0(rbx, arg1 + 0x2b0)
    sub_141997e80(rbx)

*(arg1 + 0x2a0) = rbx
