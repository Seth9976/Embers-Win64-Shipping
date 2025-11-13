// 函数: sub_1418f6370
// 地址: 0x1418f6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (data_143efb318 != 0)
    TEB* gsbase
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143efbc30 s> *rdi_2)
        _Init_thread_header(&data_143efbc30)
        
        if (data_143efbc30 == 0xffffffff)
            int64_t* rcx_13 = data_143db18d0
            
            if (rcx_13 == 0)
                sub_140a53c40()
                rcx_13 = data_143db18d0
            
            int64_t r8_3
            r8_3.b = 1
            int64_t* rax_28 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.gpucrash.collectionenable", r8_3)
            int64_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0
            else
                int64_t rdx_7 = *rax_28
                rax_29 = (*(rdx_7 + 0x58))(rax_28, rdx_7)
            
            data_143efbc28 = rax_29
            _Init_thread_footer(&data_143efbc30)
    
    if (data_143efbc40 s> *rdi_2)
        _Init_thread_header(&data_143efbc40)
        
        if (data_143efbc40 == 0xffffffff)
            int64_t* rcx_15 = data_143db18d0
            
            if (rcx_15 == 0)
                sub_140a53c40()
                rcx_15 = data_143db18d0
            
            int64_t r8_4
            r8_4.b = 1
            int64_t* rax_31 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.gpucrash.datadepth", r8_4)
            int64_t rax_26
            
            if (rax_31 == 0)
                rax_26 = 0
            else
                int64_t rdx_8 = *rax_31
                rax_26 = (*(rdx_8 + 0x58))(rax_31, rdx_8)
            
            data_143efbc38 = rax_26
            _Init_thread_footer(&data_143efbc40)
    
    arg1 = data_143efbc28
    bool rax_4 = false
    
    if (arg1 != 0)
        rax_4 = *(arg1 + 4) != 0
    
    *(rbx + 9) = rax_4
    void* rax_5 = data_143efbc38
    int32_t rax_6
    
    if (rax_5 == 0)
        rax_6 = -1
    else
        rax_6 = *(rax_5 + 4)
    
    *(rbx + 0x14) = rax_6
    
    if ((rax_6 == 0xffffffff || rax_6 s> 0x800) && (*(rbx[9] + 0x1af0) & 0x10) != 0)
        uint32_t rax_8 = zx.d(data_143efbc44)
        *(rbx + 0x14) = 0x800
        arg1 = zx.q(rax_8)
        
        if (rax_8.b == 0)
            arg1 = 1
        
        data_143efbc44 = arg1.b
    
    if ((*(rbx[9] + 0x1af0) & 0x30) == 0 && rbx[0x17] == 0)
        void*** rax_10
        rax_10, arg1 = j_sub_140a82f30(0x60)
        void*** rax_11
        
        if (rax_10 == 0)
            rax_11 = nullptr
        else
            rax_11, arg1 = sub_1418f41c0(rax_10, rbx[9], 0x800)
        
        rbx[0x17] = rax_11

rbx[8].b = 0
rbx[4] = 0

if (data_143efb318 != 0)
    arg1 = rbx[9]
    
    if ((*(arg1 + 0x1af0) & 0x30) == 0)
        int64_t rsi_1 = *(rbx[0x17] + 0x10)
        void* rdi_3 = *(*(arg1 + 0x1a50) + 0x240)
        
        if (*(rdi_3 + 0x78) != 0)
            sub_1418c86c0(rdi_3, 0, 0)
        
        data_143efba78(*(*(rdi_3 + 0x70) + 0x40), rsi_1, 0, 0x800)
        rbx[0x16].d = 0
        
        if (*(rbx + 0xb4) s<= 0xffffffff)
            sub_1405dadb0(&rbx[0x15], 0)
        
        int32_t rax_14 = *(rbx + 0xcc)
        rbx[0x19].d = 0
        
        if (rax_14 s< 0 && rax_14 != 0)
            sub_1405c5570(&rbx[0x18], 0)
        
        int64_t rsi_2 = sx.q(rbx[0x19].d)
        int32_t rax_15 = (rsi_2 + 0x800).d
        rbx[0x19].d = rax_15
        
        if (rax_15 s> *(rbx + 0xcc))
            sub_1405a4d70(&rbx[0x18])
        
        memset(rbx[0x18] + (rsi_2 << 3), 0, 0x4000)

rbx[0x1a].b = 1
*(rbx + 0xa) = data_143f0f1f4
char rax_18 = data_143f0f1f5
*(rbx + 0xb) = rax_18

if (rax_18 == 0)
    arg1 = zx.q(*(rbx + 0xa))
else
    *(rbx + 0xa) = 0
    arg1.b = 0

if (arg1.b != 0)
label_1418f658d:
    *(rbx + 0xd) = sub_140af3aa0()
    rax_18 = *(rbx + 0xb)
    
    if (*(rbx + 0xa) == 0)
        goto label_1418f659a
    
    if (rax_18 == 0)
    label_1418f65d0:
        arg1.b = 1
        sub_140b00890(arg1.b)
        rbx[1].b = 1
        void*** rax_22 = j_sub_140a82f30(0x38)
        void*** rdi_5 = rax_22
        
        if (rax_22 == 0)
            rdi_5 = nullptr
        else
            int64_t rdx_5 = rbx[9]
            int64_t r8_1 = rbx[0xa]
            rax_22[1] = 0
            rax_22[2] = 0
            *rdi_5 = &data_142ff1d68
            rdi_5[3] = rdx_5
            rdi_5[4].w = 0
            rdi_5[5] = r8_1
            rdi_5[6] = 0
            sub_1418fbab0(&rdi_5[3])
        
        rbx[3] = rdi_5
        (*rdi_5)[1](rdi_5)
    else
    label_1418f65c2:
        int32_t rax_20 = rbx[2].d
        
        if (rax_20 == 0)
            goto label_1418f65d0
        
        rbx[2].d = rax_20 - 1
else
    if (*(rbx + 0xc) != 0)
    label_1418f659a:
        
        if (rax_18 != 0)
            goto label_1418f65c2
    else if (rax_18 != 0)
        goto label_1418f658d
    
    if (*(rbx + 0xc) != 0)
        sub_140e0f7b0(&rbx[6], 0)
        sub_140b00890(*(rbx + 0xd))

*(rbx + 0xc) = *(rbx + 0xb)
char result = sub_140af3aa0()

if (result == 0)
    return result

int32_t arg_8 = 0xff00ff00
jump(*(*rbx + 0x10))
