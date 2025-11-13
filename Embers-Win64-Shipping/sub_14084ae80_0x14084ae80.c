// 函数: sub_14084ae80
// 地址: 0x14084ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x6bc) != 0)
    int64_t rdx
    rdx.b = 1
    sub_1408622c0(arg1)
    sub_14084fd50(arg1)

if (*(arg1 + 0x10) != 0xffffffff)
    int64_t* rdi_1 = *(arg1 + 0x20)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    sub_140858cf0(*(arg1 + 0x18), arg1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbp_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))

sub_14084dbf0(arg1)
sub_140861190(arg1, 0)
sub_14084ee30(arg1 + 0xa0, 0)
return sub_14084af40(arg1) __tailcall
