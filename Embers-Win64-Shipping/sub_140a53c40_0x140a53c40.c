// 函数: sub_140a53c40
// 地址: 0x140a53c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (data_143db18d0 == 0)
    void*** rax_1 = j_sub_140a82f30(0xf8)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        int64_t* rcx_1 = &rdi_1[3]
        *rdi_1 = &data_142e5ea40
        rdi_1[1] = 0
        rdi_1[2] = 0
        rcx_1[2] = 0
        rcx_1[3].d = 0
        *(rcx_1 + 0x1c) = 0x80
        int64_t* rax_2 = rcx_1[2]
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        *rcx_1 = 0
        rcx_1[1] = 0
        void* rcx_2 = &rdi_1[0xe]
        rdi_1[7].d = 0xffffffff
        *(rdi_1 + 0x3c) = 0
        rdi_1[9] = 0
        rdi_1[0xa].d = 0
        rdi_1[0xb].b = 0
        rdi_1[0xc] = 0
        rdi_1[0xd] = 0
        *(rcx_2 + 0x10) = 0
        *(rcx_2 + 0x18) = 0
        *(rcx_2 + 0x1c) = 0x80
        void* rax_3 = *(rcx_2 + 0x10)
        
        if (rax_3 != 0)
            rcx_2 = rax_3
        
        *rcx_2 = 0
        *(rcx_2 + 8) = 0
        rdi_1[0x12].d = 0xffffffff
        *(rdi_1 + 0x94) = 0
        rdi_1[0x14] = 0
        rdi_1[0x15].d = 0
        __builtin_memset(&rdi_1[0x16], 0, 0x1c)
        *(rdi_1 + 0xcc) = 1
        InitializeCriticalSection(&rdi_1[0x1a])
        SetCriticalSectionSpinCount(&rdi_1[0x1a], 0xfa0)
    
    data_143db18d0 = rdi_1
    
    if (rdi_1 == 0)
        sub_140a53c40()
        rdi_1 = data_143db18d0
    
    (*rdi_1)[7](rdi_1, r.DumpingMovie", &data_143de5434, Allows to dump each rendered frame to disk "
    "(slow fps, names MovieFrame..).\n<=0:off (default), <0:remains on, >0:remains on for n frames"
        , 1)
    
    if (data_143db18d0 != 0)
        break
